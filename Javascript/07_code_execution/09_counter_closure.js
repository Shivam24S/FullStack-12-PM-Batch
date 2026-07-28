function counter() {
    let count = 0;

    function increaseCounter() {
        count++;
        return count;
    }

    return increaseCounter;
}



let result1 = counter();

console.log("result1", result1())

let result2 = counter()

console.log("result2", result1())


let result3 = counter()

console.log("result3", result1())