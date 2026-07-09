// arithmetic

let a = 30;

let b = 10;

console.log("subtraction", a - b);
console.log("addition", a + b);
console.log("multiplication", a * b);
console.log("division", a / b);
console.log("modulo", a % b);
console.log("exponential", a ** b);

// assignment operator

a += b;

//  a = a+b

console.log("result 1", a);

a -= b;

console.log("result 2", a);

a *= b;

console.log("result 3", a);

a /= b;

console.log("result 4", a);

// comparison operator

console.log("equally", 5 == "5");

console.log("strictly equally", 5 === "5");

console.log("not equal", 20 != 10);

console.log("less then", 10 < 20);

console.log("less or equal", 19 <= 18);

console.log("greater then", 10 > 20);

console.log("greater or equal", 19 >= 18);

// logical

let logic_A = true;

let logic_B = false;

// and

if (logic_A && logic_B) {
  console.log("this block will execute only if both condition is true");
}

// or

if (logic_A || logic_B) {
  console.log(
    "this block will execute only if any of these two condition is true",
  );
}

// not

console.log(!logic_A);

// unary

let num = 24;

console.log("num value", num);

// pre increment
++num;

console.log("pre increment num value", num);

// pre decrement

--num;

console.log("pre decrement num value", num);

// post increment

console.log("post increment num value", num++);

// if (true) {
//     num++;
// }

// console.log("post increment num value", num++)

// post decrement

console.log("post decrement num value", num--);

// miscellionus

// ternary if else short hand property

// using if else
let age = 18;

// if (age >= 18) {
//     console.log("you can vote")
// } else {
//     console.log("you can't vote")
// }

// using ternary

age >= 18 ? console.log("you can vote") : console.log("you can't vote");

// typeOf operator

console.log(typeof age);
