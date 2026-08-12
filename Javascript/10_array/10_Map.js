let numbers = [1, 2, 3, 4, 5, 6, 7, 8, 9];

const doubleNumbers = numbers.map((num) => num * 2);

console.log("double numbers", doubleNumbers);

console.log("numbers", numbers);

const result = numbers.map((num) => num);

console.log(result);

const personDetails = [
  { name: "John Smith", age: 45, city: "New York", profession: "Engineer" },
  {
    name: "Emily Davis",
    age: 29,
    city: "Los Angeles",
    profession: "Graphic Designer",
  },
  { name: "Michael Brown", age: 67, city: "Chicago", profession: "Doctor" },
  { name: "Sophia Wilson", age: 22, city: "Houston", profession: "Teacher" },
  {
    name: "David Martinez",
    age: 38,
    city: "San Francisco",
    profession: "Developer",
  },
];

console.log("person details", personDetails);

const personNames = personDetails.map((p) => p.name);

console.log("person names", personNames);
