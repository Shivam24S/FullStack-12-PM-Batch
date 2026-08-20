
// using module js 

import add from "./calculate.js"

import { subtraction } from "./calculate.js"

const result = add(10,20)

console.log("result",result)


const subtractionResult = subtraction(20,10)

console.log("sub result",subtractionResult)


// using common js 

// const add = require("./calculate")

// const result = add(10,20)

// console.log("result",result)