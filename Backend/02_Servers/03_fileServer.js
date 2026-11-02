import http from "http";
import fs from "fs";

const server = http.createServer((req, res) => {
  fs.readFile("index.html", (err, data) => {
    if (err) {
      return res.json("failed to load file Data");
    }

    res.end(data);
  });
});

const port = 5000;

server.listen(port, (err) => {
  if (err) {
    return console.log(err);
  }

  console.log(`server is running on port ${port}`);
});
