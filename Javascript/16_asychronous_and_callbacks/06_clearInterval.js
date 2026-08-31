let timer = setInterval(() => {
  let time = new Date().toLocaleTimeString();

  console.log("time", time);
}, 1000);

setTimeout(() => {
  clearInterval(timer);
}, 5000);
