let game = "gta-5";

const activity = "swimming";

var message = "good morning ";

function checkGlobalScope() {
  console.log("game", game);
  console.log("activity", activity);
  console.log("message", message);

  if (true) {
    console.log("game", game);
    console.log("activity", activity);
    console.log("message", message);
  }
}

checkGlobalScope();

// hierchiery

// const -> let -> var
