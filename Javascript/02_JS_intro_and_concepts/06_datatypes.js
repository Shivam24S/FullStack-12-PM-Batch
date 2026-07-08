// String,
// number,
// Boolean,
// BigInt,
// undefined,
// null,
// Symbol,
// Object

// primitive

// String,
// number,
// Boolean,
// BigInt,
// undefined,
// null,
// Symbol,

// =>passed by value

// non primitive
// Object

// =>passed by Reference

// deep copy => passed by value

let a = 10;

let b = a;

console.log("a before", a);
console.log("b before", b);

b = 50;

console.log("a after", a);
console.log("b after", b);

// shallow copy => copy by reference

let carName1 = {
    name: "defender 130 octa",
};

let carName2 = carName1;

console.log("carName 1 before", carName1);
console.log("carName 2 before", carName2);

carName2.name = "g wagon";

console.log("carName 1 after", carName1);
console.log("carName 2 after", carName2);



const game = "super mario"


console.log("type of game", typeof game)