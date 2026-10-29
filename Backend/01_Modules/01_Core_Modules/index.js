import fs from "fs";

// const fs = require("fs");

fs.writeFileSync("new.txt", "new file created");

// fs.writeFileSync("new.pdf", "new pdf file is created using file system");

fs.writeFileSync("newFile.txt", "new other file created");

const text = fs.readFileSync("newFile.txt", "utf-8");

console.log("new file text", text);
