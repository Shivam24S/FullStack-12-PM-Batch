
let text = "we are learning javascript";


// split

let result =text.split(" ")

console.log("split =>",typeof(result))

console.log("split =>",text.split(""))

console.log("split =>",text.split("e"))


// substring similar like slice method but some different functionality

console.log("sub string =>",text.substring(1,8))

console.log("slice =>",text.slice(1,8))



// now starting argument will be greater number


console.log("sub string =>",text.substring(8,1))

console.log("slice =>",text.slice(8,1))

// now starting or any index less than  0 


console.log("sub string =>",text.substring(-8,1))

console.log("slice =>",text.slice(-8,1))

// now -1

console.log("sub string =>",text.substring(-1))

console.log("slice =>",text.slice(-1)) 


text = "WE ARE LEARNING JAVASCRIPT STRING METHODS"


console.log("lower case =>",text.toLowerCase())

text = "we are learning javascript"
console.log("upper case =>",text.toUpperCase())


text = "       javascript        "

console.log("length of string =>",text.length)

// trim 


text=text.trim();
console.log("length of string after trim=>",text.length)

// trimStart

text = "       javascript        "

text = text.trimStart();


console.log("length of string after trimStart=>",text.length)


// trimEnd

text = "       javascript        "

text = text.trimEnd();


console.log("length of string after trimEnd=>",text.length)