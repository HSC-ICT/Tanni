const profile = prompt("Enter the url: ");
const myName = prompt("Enter your name: ");
const bio = prompt("Enter your bio: ");

const container = document.querySelector(".container");
for(let i = 0; i < 8; i++){
    const card = document.createElement("div");
    card.classList.add("card");
    card.innerHTML = `
        <div class="image">
            <img src="${profile}" alt="">
        </div>
        <div class="bio">
            <h2>${myName}</h2>
            <p>${bio}</p>
        </div>
        <p class="para">
            Lorem ipsum dolor sit, amet consectetur adipisicing elit. Culpa nesciunt facere quis illum, pariatur corporis hic natus ratione minima.
        </p>
    `
    container.appendChild(card);
}