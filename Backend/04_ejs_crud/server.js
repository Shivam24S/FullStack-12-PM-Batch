import express, { urlencoded } from "express";

const app = express();

// app.use(express.json());

app.use(express.urlencoded());

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

app.post("/add", (req, res) => {
  const { name } = req.body;

  const newStudent = {
    id: studentList.length + 1,
    name,
  };

  studentList.push(newStudent);

  res.redirect("/");
});

app.get("/edit/:id", (req, res) => {
  const { id } = req.params;

  const student = studentList.find((s) => s.id === Number(id));

  console.log("id", id);

  res.render("edit", { student });
});

app.post("/edit/:id", (req, res) => {
  const { id } = req.params;

  const index = studentList.findIndex((s) => s.id === Number(id));

  const { name } = req.body;

  studentList[index] = {
    name,
  };

  res.redirect("/");
});

const port = 5000;

app.listen(port, (err) => {
  if (err) {
    return console.log(err);
  }

  console.log(`server running on port ${port}`);
});
