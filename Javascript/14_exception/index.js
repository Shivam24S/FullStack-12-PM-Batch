// without exception handling

// function bankService(pin) {
//   let atmPin = 1234;

//   if (atmPin !== pin) {
//     throw new Error("invalid pin");
//   }

//   console.log("welcome to xyz bank");

//   console.log("you can use below services");
// }

// let userEnteredPin = 4567;

// bankService(userEnteredPin);

// now with exceptional handling

// function bankService(pin) {
//   try {
//     let atmPin = 1234;

//     if (atmPin !== pin) {
//       throw new Error("invalid pin");
//     }

//     console.log("welcome to xyz bank");
//     console.log("you can use below services");
//   } catch (error) {
//     console.log("error", error.message);
//   }

//   console.log("do you want to explore more ?");
// }

// let userEnteredPin = 4567;

// bankService(userEnteredPin);

// now with finally

function bankService(pin) {
  try {
    let atmPin = 1234;

    if (atmPin !== pin) {
      throw new Error("invalid pin");
    }

    console.log("welcome to xyz bank");
    console.log("you can use below services");
  } catch (error) {
    console.log("error", error.message);
  } finally {
    console.log("do you want to explore more ?");
  }
}

let userEnteredPin = 1234;

bankService(userEnteredPin);
