function outer() {
    let msg = "hi";

    function inner() {
        console.log(msg);
    }

    return inner;
}



let msg = outer();

console.log("msg", msg())