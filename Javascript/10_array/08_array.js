const fruits = ["apple", "banana", "cherry", "dragon fruits", "pineapple"];

console.log("index of", fruits.indexOf("mango"));



console.log(fruits.includes("mango"))



let alphabet = ["a", "d", "b", "e", "c"];

let numbers = [1,9,7,5,2,1,0,8]


console.log(alphabet.sort())

console.log(numbers.sort())



const descendingNumber = numbers.sort((a,b)=>{
    return b-a
})


a>b 





console.log("descending numbers",descendingNumber)


let name = "dexter";

let nameArray = name.split("");

console.log("name array",nameArray.reverse())

let reverseName = nameArray.join("");

console.log("reverseName",reverseName)



