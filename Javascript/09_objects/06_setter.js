const voter = {
  name: "sergio",
  age: "",
  profession: "professor",

  set setAge(age) {
    if (age <= 18) {
      console.log("age must be greater than 18");
      return;
    }
    this.age = age;
  },
};

voter.setAge = 17;

console.log("voter", voter);
