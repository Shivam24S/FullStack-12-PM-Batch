function total() {
    let result=0;

    for (let i = 0; i < arguments.length; i++) {
        result +=arguments[i];
    }

    console.log("result", result);
}

total(10, 20, 30, 40, 50, 60, 70, 80, 90, 100);
