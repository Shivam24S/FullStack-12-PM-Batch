// document.getElementById("btn").addEventListener("click",()=>{

//     alert("button clicked")
// })

const btnClicked = () => {
  const btn = document.getElementById("btn");

  btn.innerText = "text changed";

  alert("button clicked");
};

document.getElementById("double").addEventListener("dblclick", () => {
  const double = (document.getElementById("double").innerText =
    "double clicked button");
  alert("dbl clicked");
});

document.getElementById("form").addEventListener("submit", (e) => {
  e.preventDefault();

  const name = document.getElementById("name").value.trim();

  alert(`hi ${name}`);
});

const mouseOver = document.getElementById("mouseover");

mouseOver.addEventListener("mouseover", () => {
  mouseOver.style.color = "blue";
});


const mouseOut = document.getElementById("mouseOut")

mouseOut.addEventListener("mouseleave",()=>{

    mouseOut.style.color = "red";
})


const key = document.getElementById("keyup");


key.addEventListener("keyup",(e)=>{
    
    const typed = document.getElementById("typed")

    console.log(e.key)

})

