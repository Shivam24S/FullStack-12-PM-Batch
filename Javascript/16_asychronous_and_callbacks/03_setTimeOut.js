function currentYear() {
  console.log("checking current year....");

  setTimeout(() => {
    const year = new Date().getFullYear();

    console.log("current year is ", year);
  }, 1000);
}


currentYear()





function greeting(){

    console.log("hi there good morning!")
}


setTimeout(greeting,3000)
