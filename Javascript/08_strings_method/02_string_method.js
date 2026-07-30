let text = "we are learning javascript javascript javascript";

console.log("text =>", text);

// match

console.log("match =>", text.match("javascript"));

// repeat

console.log("repeat =>", text.repeat(5));

console.log("text", text);

// replace

console.log("replace =>", text.replace("e", "E"));

// replaceAll

console.log("replaceAll =>", text.replaceAll("e", "E"));

// search

console.log("search =>", text.search("learning"));

console.log("indexOf =>", text.indexOf("learning"));

// indexOf

console.log("index of =>", text.indexOf("javascript"));

console.log("middle index of =>", text.indexOf("javascript", 17));

console.log("last index of =>", text.lastIndexOf("javascript"));


// slice 


console.log("text =>",text)

// 
console.log("slice =>",text.slice(3))
console.log("slice =>",text.slice(1,5))
console.log("slice =>",text.slice(2,10))
console.log("slice =>",text.slice(-1))
