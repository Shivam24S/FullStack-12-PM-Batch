const fruits = ["apple", "banana", "cherry", "mango", "watermelon", "litchi"];

const shopItems = [...fruits];

shopItems.push("strawberry");

console.log("fruits", fruits);

console.log("shopItems", shopItems);

const person = [
  {
    name: "alice",
    city: "bvn",
  },
  {
    name: "alice",
    city: "bvn",
  },
];

const personList = [...person];

console.log("person list", personList);

// rest  are used in parameter only

function game(...game) {
  console.log("i have ", ...game);

  console.log("i have ", game[0]);
}

game("gta-5", "forza", "god of war", "euro truck", "snow runner");
