const age = [5, 10, 15, 20, 25, 30];

const result = age.some((x) => {
  return x >= 30;
});

console.log("result", result);

// every

const studentMarks = [35, 40, 55, 65, 85, 95];

const studentResult = studentMarks.every((m) => {
  return m > 35;
});

console.log("is student have received marks greater than 35", studentResult);


// reverse method 



const numbers = [1,2,3,4,5,6,7,8,9,"a","z","d"]

numbers.reverse()

console.log("reverse",numbers)