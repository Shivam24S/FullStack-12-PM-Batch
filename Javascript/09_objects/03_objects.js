const mountaineer = {
  name: "nirmal purja",
  nickName: "Nims dai",
  age: 43,
  record: "52*8000",
};

// console.log("name", mountaineer.name);

// console.log("nick name", mountaineer.nickName);

// console.log("age", mountaineer.age);

// console.log("record", mountaineer.record);

// destructing

const { name, nickName, age, record } = mountaineer;

console.log("name", name);

console.log("nick name", nickName);

console.log("age", age);

console.log("record", record);

// studentList

const student2 = {
  name: "xyz",
  age: 1,
  class: 1,
  rollNo: 1,
};

const student3 = {
  name: "xyz",
  age: 1,
  class: 1,
  rollNo: 1,
};

function student(name, age, std, rollNo) {
  this.name = name;
  this.age = age;
  this.std = std;
  this.rollNo = rollNo;
}

const student4 = new student("dexter", 30, 12, 36);

const student5 = new student("professor", 30, 8, 39);

console.log("student4", student4);

console.log("student5", student5);

student.prototype.email = "student@gmail.com";

const student6 = new student("tokyo", 35, 56, 36);

console.log("student6", student6.email);

console.log("student5", student5);

delete student5.name;

console.log("student5", student5);

// hasownProperty

console.log(student5.hasOwnProperty("name"));

console.log(student5.hasOwnProperty("age"));
