const fruits = [
  "apple",
  "banana",
  "cheery",
  "mango",
  "watermelon",
  "grapes",
  "strawberry",
];

console.log("fruits", fruits);

for (let i = 0; i < fruits.length; i++) {
  // console.log("fruits =>",fruits[i])
}

// for of

for (let fruit of fruits) {
  console.log("fruits =>", fruit);
}

// for each

let numbers = [1, 2, 3, 4, 5, 6, 7, 8, 9];

numbers.forEach((n) => {
  console.log(2 * n);
});

//

const vegetables = ["potato", "tomato", "brinjal", "carrot", "ladies finger"];

const shopItems = [...fruits].concat(vegetables);

console.log("shop items", shopItems);

console.log("vegetables", vegetables);

console.log("vegetables", vegetables.toString());
