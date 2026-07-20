function factorial(num) {
  if (num < 0) {
    return "factorial for negative value is not defined";
  } else if (num == 1) {
    return 1;
  } else {
    return num * factorial(num - 1);
  }
}


const result = factorial(10);


console.log("result",result)


