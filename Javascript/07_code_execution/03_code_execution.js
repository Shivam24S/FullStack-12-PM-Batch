var x = 1000;

a();
b();

console.log(x);

function a() {
  var x = 10;

  console.log(x);
}

function b() {
  var x = 100;

  console.log(x);
}



// 10
// 100
// 1000