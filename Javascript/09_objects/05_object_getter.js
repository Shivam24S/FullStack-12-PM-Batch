const mountaineer = {
  name: "dexter",
  surname: "morgan",
  age: 30,
  passion: "forensic expert",

  get fullName() {
    return this.name + " " + this.surname;
  },
};

console.log("fullname", mountaineer.fullName);
