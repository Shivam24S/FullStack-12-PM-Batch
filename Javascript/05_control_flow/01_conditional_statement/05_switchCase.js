let light = "green";

light="blue"

switch (light) {
    case "green": {
        console.log("you can go");
        break
    }

    case "red": {
        console.log("you have to stop");
        break
    }

    case "yellow": {
        console.log("be prepare for the stop");
        break
    }

    default: {
        console.log("you have entered invalid signal")
    }
}
