import express from "express";

const app = express();

// console.log("app", app);

app.get("/", (req, res) => {
  res.json("hello from server");
});

const port = 5001;

app.listen(port, (err) => {
  if (err) {
    return console.log(err);
  }

  console.log(` server running on port ${port}`);
});
