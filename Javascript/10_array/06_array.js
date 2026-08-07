const fruits = [
  "apple",
  "banana",
  "cheery",
  "mango",
  "watermelon",
  "grapes",
  "strawberry",
];

console.log("join method=>", fruits.join(" "));

console.log("join method=>", fruits.join(""));

// flat

let number = [
  [1, 2, 3, 4],
  [5, 6, 7, 8, 9],
  [9, 10, [11, [12, 13,[14]]]],
];


console.log("number",number)

console.log(number.flat(1))

console.log(number.flat(2))


console.log(number.flat(Infinity))


// slice


console.log("fruits",fruits.slice(2,5))

console.log("fruits",fruits)