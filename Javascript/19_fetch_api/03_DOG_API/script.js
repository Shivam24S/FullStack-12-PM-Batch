// document.getElementById("btn").addEventListener("click", async () => {
//   try {
//     const image = document.getElementById("image");

//     const res = await fetch("https://dog.ceo/api/breeds/image/random");

//     const data = await res.json();

//     image.src = data.message;
//   } catch (error) {
//     console.log(error);
//   }
// });

async function fetchDogImage() {
    try {
        const image = document.getElementById("image");

        const res = await fetch("https://dog.ceo/api/breeds/image/random");

        const data = await res.json();

        image.src = data.message;
    } catch (error) {
        console.log(error);
    }

}



// // now using promise

// const dogImage = fetch("https://dog.ceo/api/breeds/image/random");

// function fetchDogImage() {
//   const image = document.getElementById("image");

//   dogImage
//     .then((res) => {
//       return res.json();
//     })
//     .then((data) => {
//       return data;
//     })
//     .then((data) => {
//       image.src = data.message;
//     })
//     .catch((err) => {
//       console.log(err);
//     });
// }
