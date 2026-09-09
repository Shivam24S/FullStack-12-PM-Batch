// let foodItem = ["samosa", "pasta"];

foodItem = "";

function foodOrder(foodItem) {
  return new Promise((resolve, reject) => {
    if (foodItem === "") {
      setTimeout(() => {
        reject("there is no food item selected");
      }, 3000);
    } else {
      let orderId = "anjcdnc1213";

      setTimeout(() => {
        console.log(`${orderId} id created...`);

        resolve(orderId);
      }, 3000);
    }
  });
}

foodOrder(foodItem)
  .then((id) => {
    return new Promise((resolve, reject) => {
      if (id === "") {
        setTimeout(() => {
          reject("order id is not generated");
        }, 3000);
      } else {
        setTimeout(() => {
          console.log(`${id} is generated and  informing to seller...`);
          resolve(id);
        }, 3000);
      }
    });
  })
  .then((id) => {
    return new Promise((resolve, reject) => {
      if (!id) {
        setTimeout(() => {
          reject("order failed....");
        }, 3000);
      } else {
        setTimeout(() => {
          console.log("order delivered...");
          resolve(id);
        }, 3000);
      }
    });
  })
  .catch((err) => {
    console.log(err);
  })
  .finally(() => {
    console.log("do you want to explore more ?");
  });
