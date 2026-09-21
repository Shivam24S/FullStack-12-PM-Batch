// localStorage

const data = {
  id: "xyz",
  password: "123456789abcd",
};

// setItem

localStorage.setItem("data", JSON.stringify(data));

// getItem

const localData = JSON.parse(localStorage.getItem("data"));

console.log("data", localData);

const localDataValue = document.getElementById("localDataValue");

console.log("local id", localData);

localDataValue.textContent = localData.password;
