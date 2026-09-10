function payment(amount) {
  return new Promise((resolve, reject) => {
    if (amount <= 0) {
      setTimeout(() => {
        reject("failed to initiate payment amount should be positive value");
      }, 3000);
    } else {
      setTimeout(() => {
        resolve(amount);
        console.log("stage-1", `₹ ${amount} payment initiated....`);
      }, 3000);
    }
  });
}

let balance = 10000;

function checkBalance(amount) {
  return new Promise((resolve, reject) => {
    if (amount > balance) {
      setTimeout(() => {
        reject("insufficient balance");
      }, 3000);
    } else {
      setTimeout(() => {
        console.log("stage-2", "payment can be done due to sufficient balance");

        resolve(amount);
      }, 3000);
    }
  });
}

function paymentDeduct(amount) {
  return new Promise((resolve, reject) => {
    const remainBalance = balance - amount;

    if (remainBalance < 0) {
      setTimeout(() => {
        reject(`${remainBalance} is available balance`);
      }, 3000);
    } else {
      setTimeout(() => {
        console.log("stage-3", "processing payments...");
        resolve(amount);
      }, 3000);
    }
  });
}

function paymentStatus(amount) {
  return new Promise((resolve, reject) => {
    let remainBalance = balance - amount;

    console.log("remain balance", remainBalance);

    if (remainBalance < balance) {
      setTimeout(() => {
        console.log("stage-4", `${amount} payment has been processed....`);
        resolve(amount);
      }, 3000);
    } else {
      setTimeout(() => {
        reject("payment has been failed");
      }, 3000);
    }

    // reject("payment has been failed");
  });
}

async function handlePayment() {
  const paymentStart = await payment(5000);

  const verifyBalance = await checkBalance(paymentStart);

  const deduction = await paymentDeduct(verifyBalance);

  console.log("this will wait")

  const status = await paymentStatus(deduction);

  console.log("status",status)
}


handlePayment()


console.log("this will not wait")
