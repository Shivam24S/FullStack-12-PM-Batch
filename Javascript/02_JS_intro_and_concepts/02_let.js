function game() {
    if (true) {
        let game = "gta-6";

        console.log("i am playing", game);
    }

    console.log("what is the game name currently you are playing", game)
}


game()


// declaration
let activity;

// initialization

activity = "running";


console.log("activity", activity)

// reinitialization

activity = "swimming"

console.log("activity", activity)


// redeclaration can't possible in same scope

// let activity;

console.log("activity", activity)


if (true) {
    let activity = "riding";

    console.log("i am currently doing", activity);

}