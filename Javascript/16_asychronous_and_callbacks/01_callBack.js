function greet(name) {
  console.log(`hi ${name} good morning...`);
}

function greetUser(name, greet) {
  console.log("fetching user detail...");

  greet(name);
}


greetUser("dexter",greet)