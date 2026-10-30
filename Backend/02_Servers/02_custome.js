import http from "http";

const server = http.createServer((req, res) => {
  res.writeHead(200, {
    "Content-Type": "text/html",
  });

  res.end("<h1>hello from server</h1>");
});

const port = 5000;

server.listen(port, (err) => {
  if (err) {
    return console.log(err);
  }

  console.log(`server running on port ${port}`);
});
