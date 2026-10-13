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

const qns = document.getElementById("qns");

let currentIndex = 0;

qns.innerText = quizQuestions[currentIndex].question;
