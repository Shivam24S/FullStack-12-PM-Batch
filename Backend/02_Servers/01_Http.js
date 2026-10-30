// server is  computer system which accept the user request and as per user request it will responded with necessary action

import http from "http";

const server = http.createServer((req, res) => {
  res.write("hello from server");
  res.end();
});

const port = 5000;

server.listen(port, (err) => {
  if (err) {
    return console.log(err);
  }

  console.log(`server running on port ${port}`);
});
