let students = [
  "alice",
  "bob",
  "charlie",
  "denver",
  "micheal",
  "tokyo",
  "berlin",
  "nairobi",
  "moscow",
  "oslo",
  "helsinki",
];

for (let i = 0; i < students.length; i++) {
  console.log("current student name", students[i]);

  if (students[i] === "berlin") {
    console.log("found", students[i]);
    break;
  }
}
