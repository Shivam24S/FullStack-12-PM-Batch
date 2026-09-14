async function fetchUserData() {
  try {
    const res = await fetch("https://jsonplaceholder.typicode.com/users");

    const data = await res.json();

    if (!res.ok) {
      throw new Error("failed to fetch data");
    }

    console.log("data", data);
  } catch (error) {
    console.log("error", error);
  }
}

fetchUserData();
