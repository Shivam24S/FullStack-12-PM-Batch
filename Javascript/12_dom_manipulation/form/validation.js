
document.getElementById("form").addEventListener("submit",(event)=>{

    event.preventDefault()


    const name = document.getElementById("name").value;

    const errorMessage = document.getElementById("errorMessage")


    if(name === ""){
        errorMessage.textContent="name is required"
    }
    

    
})


