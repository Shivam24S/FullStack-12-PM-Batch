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

function loadQuestion() {
  const qns = document.getElementById("qns");

  const currentQns = quizQuestions[currentIndex];

  qns.innerText = currentQns.question;

  qnsNum.innerText = `Qns ${currentIndex + 1} / ${quizQuestions.length}`;

  options.innerHTML = "";

  currentQns.options.forEach((opt, index) => {
    let col = document.createElement("div");

    col.classList.add("col-md-6");

    let btn = document.createElement("button");

    btn.classList.add("btn", "btn-outline-primary", "option-btn");

    btn.innerText = opt;

    options.appendChild(col);

    col.appendChild(btn);

    console.log("current QNs", currentQns);
  });
}

loadQuestion();

function nextQns() {
  if (currentIndex < quizQuestions.length - 1) {
    currentIndex++;
  }

  loadQuestion();
}
