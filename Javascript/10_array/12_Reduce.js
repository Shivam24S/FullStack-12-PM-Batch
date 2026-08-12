const numbers = [1, 0, 1, 2, 45, 8, 4, 5, 4, 5, 1, 5, 5, 41, 14, 4];

const total = numbers.reduce((acc, curr) => {
  return (acc += curr);
});

console.log("total", total);

const shoppingItems = [
  { name: "socks", qty: 2, price: 500 },
  { name: "shorts", qty: 5, price: 800 },
  {
    name: "shoes",
    qty: 1,
    price: 5000,
  },
];

const totalAmount = shoppingItems.reduce((acc, curr) => {
  return (acc += curr.price * curr.qty);
}, 0);

console.log("total amount", totalAmount);

// finding max

const max = numbers.reduce((acc, curr) => {
  if (curr > acc) {
    acc = curr;
  }
  return acc;
});

console.log("max",max)
