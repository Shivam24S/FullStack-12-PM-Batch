const payment = (amt, cb) => {
  try {
    if (amt <= 0) {
      throw new Error(
        "failed to initiate payment amount should be positive value",
      );
    } else {
      setTimeout(() => {
        console.log("stage-1", `₹ ${amt} payment initiated....`);

        cb(null, amt);
      }, 3000);
    }
  } catch (error) {
    console.log(error.message);
  }
};

let balance = 10000;

const checkBalance = (amt, cb) => {
  try {
    if (amt > balance) {
      setTimeout(() => {
        throw new Error("insufficient balance");
      }, 2000);
    } else {
      setTimeout(() => {
        console.log("stage-2", "payment can be done due to sufficient balance");

        cb(null, amt);
      }, 3000);
    }
  } catch (error) {
    console.log(error.message);
  }
};

const paymentDeduct = (amt, cb) => {
  try {
    const remainBalance = balance - amt;

    if (remainBalance < 0) {
      throw new Error(`${remainBalance} is available balance`);
    }

    setTimeout(() => {
      console.log("stage-3", "processing payments...");

      cb(null, amt);
    }, 3000);
  } catch (error) {
    console.log(error);
  }
};

const paymentStatus = (amt, cb) => {
  let remainBalance = balance - amt;

  console.log("remain balance", remainBalance);

  try {
    if (remainBalance < balance) {
      setTimeout(() => {
        console.log("stage-4", "payment has been processed....");

        cb(null, amt);
      }, 3000);
    } else {
      throw new Error("payment has been failed");
    }
  } catch (error) {
    console.log(error.message);
  }
};

payment(15000, (err, amt) => {
  if (err) {
    return console.log(err.message);
  } else {
    checkBalance(amt, (err, amt) => {
      if (err) {
        return console.log(err.message);
      } else {
        paymentDeduct(amt, (err, amt) => {
          if (err) {
            return console.log(err.message);
          } else {
            paymentStatus(amt, (err, amt) => {
              if (err) {
                return console.log(err.message);
              } else {
                console.log(`${amt} transaction successfully`);
              }
            });
          }
        });
      }
    });
  }
});
