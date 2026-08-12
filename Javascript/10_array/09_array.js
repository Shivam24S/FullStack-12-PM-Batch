// find

let numbers = [1, 4, 5, 6, 87, 98, 9, 4, 47, 87, 5, 41, 4, 74];

// numbers.sort();

let findResult = numbers.find((num) => num > 24);

console.log("find result", findResult);

// findIndex

let findIndexResult = numbers.findIndex((num) => num > 24);

console.log("find index result", findIndexResult);
