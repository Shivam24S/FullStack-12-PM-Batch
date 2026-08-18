const heading1 = document.getElementById("heading1");

console.log("heading 1", heading1);

// now changes

// heading1.innerText = "inner text"

// heading1.innerHTML =  "<p>para</p>"

// heading1.textContent = "text content"

// now diff between innerText and textContent

// innerText can't read properties of display none

const innerTextValue = document.getElementById("innerText");

console.log("innerText value", innerTextValue.innerText);

// textContent  can read properties of display none

const textContentValue = document.getElementById("textContent");

console.log("text content value", textContentValue.textContent);

const para = document.getElementsByClassName("para");

console.log("para 1",para[0]);

para[0].textContent = "changed para";

para[2].innerText ="last para changed"


// using tagName 

const tagValue = document.getElementsByTagName("h3");

console.log("tag value",tagValue)


tagValue[0].innerText = "tag value changed"


// now using query selector 

const heading4 = document.querySelector("#heading4")

console.log("heading4",heading4)

heading4.innerText = "query selector";


const heading5 = document.querySelector(".heading5")

console.log("heading 5",heading5)

heading5.innerText = "query selector class";


// query selector all

const heading2 = document.querySelectorAll(".heading2")

console.log("heading 2",heading2)

heading2.forEach((item)=>{
    item.innerText = "query selector all"
} )


const heading3 = document.createElement("h3");

heading3.innerText = "this is heading 3";

document.body.appendChild(heading3);

// 

const heading6 = document.querySelector(".heading6");

// heading6.remove();

heading6.style.fontSize = "50px";