import express from "express";

const app = express();

app.set("view engine", "ejs");

const studentList = [
  { id: 1, name: "dexter" },
  { id: 2, name: "heisenberg" },
  {
    id: 3,
    name: "alice",
  },
];

app.get("/", (req, res) => {
  res.render("home", { studentList });
});

app.get("/add", (req, res) => {
  res.render("add");
});

const port = 5000;

app.listen(port, (err) => {
  if (err) {
    return console.log(err);
  }

  console.log(`server running on port ${port}`);
});
