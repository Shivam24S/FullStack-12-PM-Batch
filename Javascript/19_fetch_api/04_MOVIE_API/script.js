document.getElementById("form").addEventListener("submit", async (e) => {
  e.preventDefault();

  const movieName = document.getElementById("movieName").value.trim();

  const container = document.getElementById("container");

  const errorText = document.getElementById("error");

  container.innerHTML = "";

  try {
  
    const res = await fetch(
      `https://www.omdbapi.com/?apikey=thewdb&s=${movieName}`,
    );

    const data = await res.json();

    if (data.Response !== "True") {
      // container.innerHTML =  `<h1>no movie data found</h1>`
      throw new Error("failed to fetch movie data");
    } else {
      data.Search.forEach((movie) => {
        

        const image = document.createElement("img");

        image.src = movie.Poster;
        image.alt = movie.Title;
        ((image.style.width = "250px"), (image.style.margin = "10px"));

        container.appendChild(image);
      });
    }
  } catch (error) {
    errorText.textContent = error;
  }
});
