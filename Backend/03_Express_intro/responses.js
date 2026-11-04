import express from "express";

const app = express();

app.get("/", (req, res) => {
  res.send("hello from response server");
});

app.get("/about", (req, res) => {
  res.send("this about  server");
});

app.get("/user", (req, res) => {
  res.send({
    name: "dexter",
    age: 35,
    role: "forensic expert",
  });
});

const person = {
  name: "dexter",
  age: 35,
  role: "forensic expert",
};

app.get("/json", (req, res) => {
  res.status(200).json({ messages: "data fetched successfully", person });
});

const port = 5000;

app.listen(port, (err) => {
  if (err) {
    return console.log(err);
  }

  console.log(` server running on port ${port}`);
});
