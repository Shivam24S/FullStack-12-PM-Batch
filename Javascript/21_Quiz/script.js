const quizQuestions = [
  {
    question: "Which keyword is used to declare a variable in JavaScript?",
    options: ["var", "int", "string", "float"],
    correctAnswerIndex: 0,
  },
  {
    question: "Which method adds an element to the end of an array?",
    options: ["pop()", "push()", "shift()", "unshift()"],
    correctAnswerIndex: 1,
  },
  {
    question: "What is the output of typeof 'Hello'?",
    options: ["number", "boolean", "string", "object"],
    correctAnswerIndex: 2,
  },
  {
    question: "Which symbol is used for strict equality?",
    options: ["=", "==", "===", "!="],
    correctAnswerIndex: 2,
  },
  {
    question: "Which method removes the last element from an array?",
    options: ["shift()", "pop()", "slice()", "splice()"],
    correctAnswerIndex: 1,
  },
  {
    question: "What is the output of 2 + '3'?",
    options: ["5", "23", "NaN", "undefined"],
    correctAnswerIndex: 1,
  },
  {
    question:
      "Which keyword declares a block-scoped variable that cannot be reassigned?",
    options: ["var", "let", "const", "static"],
    correctAnswerIndex: 2,
  },
  {
    question: "Which method converts a JSON string into a JavaScript object?",
    options: [
      "JSON.stringify()",
      "JSON.parse()",
      "JSON.convert()",
      "JSON.object()",
    ],
    correctAnswerIndex: 1,
  },
  {
    question:
      "Which array method creates a new array by transforming each element?",
    options: ["filter()", "forEach()", "map()", "find()"],
    correctAnswerIndex: 2,
  },
  {
    question: "What does Boolean(0) return?",
    options: ["true", "false", "0", "undefined"],
    correctAnswerIndex: 1,
  },
];
let currentIndex = 0;

const qnsNum = document.getElementById("qnsNum");

const options = document.getElementById("options");

let score = 0;

let selectedAns = null;

let userAnswers = [];

let timer = null;

let timeLeft = 30;

const nextButton = document.getElementById("next-btn");
const answerHint = document.getElementById("answer-hint");
const timerElement = document.getElementById("timer");
const progressBar = document.getElementById("progress-bar");
const optionLabels = ["A", "B", "C", "D"];

nextButton.addEventListener("click", nextQns);

function loadQuestion() {
  const qns = document.getElementById("qns");

  const currentQns = quizQuestions[currentIndex];

  qns.innerText = currentQns.question;

  qnsNum.innerText = `Question ${currentIndex + 1} / ${quizQuestions.length}`;
  progressBar.style.width = `${((currentIndex + 1) / quizQuestions.length) * 100}%`;
  nextButton.disabled = true;
  answerHint.innerText = "Select an answer to continue";

  options.innerHTML = "";

  currentQns.options.forEach((opt, index) => {
    const btn = document.createElement("button");

    btn.classList.add("option-btn");
    btn.type = "button";
    btn.innerText = opt;
    btn.setAttribute("aria-label", `Option ${optionLabels[index]}: ${opt}`);

    const optionKey = document.createElement("span");
    optionKey.classList.add("option-key");
    optionKey.innerText = optionLabels[index];
    btn.prepend(optionKey);

    btn.onclick = function () {
      selectedAns = index;
      document.querySelectorAll(".option-btn").forEach((option) => {
        option.classList.remove("selected");
      });
      btn.classList.add("selected");
      nextButton.disabled = false;
      answerHint.innerText = "Answer selected";
    };

    options.appendChild(btn);
  });

  startTimer();
}

loadQuestion();

function nextQns() {
  if (selectedAns === null) {
    return;
  }

  userAnswers.push({
    qns: quizQuestions[currentIndex].question,
    userSelected: selectedAns,
    options: quizQuestions[currentIndex].options,
    correctAnswer: quizQuestions[currentIndex].correctAnswerIndex,
  });

  if (selectedAns === quizQuestions[currentIndex].correctAnswerIndex) {
    score++;
  }

  if (currentIndex < quizQuestions.length - 1) {
    selectedAns = null;
    currentIndex++;
    loadQuestion();
  } else {
    result();
  }
}

function startTimer() {
  clearInterval(timer);
  timeLeft = 30;
  timerElement.classList.remove("is-urgent");
  timerElement.innerText = `${timeLeft}s`;
  timer = setInterval(() => {
    timeLeft--;
    timerElement.innerText = `${timeLeft}s`;
    if (timeLeft <= 5) {
      timerElement.classList.add("is-urgent");
    }

    if (timeLeft === 0) {
      clearInterval(timer);
      answerTimedOut();
    }
  }, 1000);
}

function answerTimedOut() {
  const currentQns = quizQuestions[currentIndex];

  userAnswers.push({
    qns: currentQns.question,
    userSelected: selectedAns,
    options: currentQns.options,
    correctAnswer: currentQns.correctAnswerIndex,
  });

  if (selectedAns === currentQns.correctAnswerIndex) {
    score++;
  }

  if (currentIndex < quizQuestions.length - 1) {
    currentIndex++;
    selectedAns = null;
    loadQuestion();
  } else {
    result();
  }
}

function result() {
  clearInterval(timer);
  const result = document.getElementById("quiz-card");

  result.innerHTML = `
    <div class="result-view">
      <div class="result-heading">
        <span class="brand-mark" aria-hidden="true">&#10003;</span>
        <p class="eyebrow">Quiz complete</p>
        <h2>Nice work!</h2>
        <p class="score">You scored ${score} / ${quizQuestions.length}</p>
      </div>
      <div class="review-list">
        ${userAnswers.map((answer, index) => `
          <article class="review-item">
            <p class="review-question">${index + 1}. ${answer.qns}</p>
            <p class="review-answer">
              Your answer: ${answer.userSelected !== null ? answer.options[answer.userSelected] : "Not selected"}
              <br />
              Correct answer: <strong>${answer.options[answer.correctAnswer]}</strong>
            </p>
          </article>
        `).join("")}
      </div>
      <button class="restart-btn" type="button" onclick="restartQuiz()">Try again <span aria-hidden="true">&rarr;</span></button>
    </div>
  `;
}

function restartQuiz() {
  window.location.reload();
}
