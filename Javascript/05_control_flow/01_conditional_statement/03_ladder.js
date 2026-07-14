let marks = 80;

if (marks >= 90 && marks <= 100) {
  console.log("you have achieved A+ grade");
} else if (marks >= 80 && marks < 90) {
  console.log("you have achieved A grade");
} else if (marks >= 70 && marks < 80) {
  console.log("you have achieved B grade");
} else if (marks >= 60 && marks < 70) {
  console.log("you have achieved C grade");
} else if (marks >= 50 && marks < 60) {
  console.log("you have achieved D grade");
} else if (marks >= 36 && marks < 50) {
  console.log("you have achieved E grade");
} else if (marks <= 35) {
  console.log("you have failed this examination");
} else {
  console.log("you have entered wrong marks");
}
