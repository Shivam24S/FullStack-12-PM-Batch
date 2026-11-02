import http from "http";

const server = http.createServer((req, res) => {
  if (req.url === "/") {
    res.end("this is home");
  } else if (req.url === "/about") {
    res.end("this is about url");
  } else if (req.url === "/service") {
    res.end("this is service url");
  } else if (req.url === "/help") {
    res.end("this is help url");
  } else {
    res.end("requested route not found");
  }
});

const port = 5000;

server.listen(port, (err) => {
  if (err) {
    return console.log(err);
  }

  console.log(`server is running on port ${port}`);
});
