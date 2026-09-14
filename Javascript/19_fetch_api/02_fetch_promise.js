const fetchUserData = fetch("https://jsonplaceholder.typicode.com/users");

console.log("data", fetchUserData);

fetchUserData
  .then((res) => {
    return res.json();
  })
  .then((data) => {
    console.log("Data", data);
  })
  .catch((err) => {
    console.log("err", err);
  });
