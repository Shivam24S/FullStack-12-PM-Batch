const products = [
  {
    id: 1,
    name: "Wireless Headphones",
    price: 2499,
    image:
      "https://images.unsplash.com/photo-1505740420928-5e560c06d30e?w=600&h=600&fit=crop",
  },
  {
    id: 2,
    name: "Smart Watch",
    price: 3999,
    image:
      "https://images.unsplash.com/photo-1523275335684-37898b6baf30?w=600&h=600&fit=crop",
  },
  {
    id: 3,
    name: "Running Shoes",
    price: 2999,
    image:
      "https://images.unsplash.com/photo-1542291026-7eec264c27ff?w=600&h=600&fit=crop",
  },
  {
    id: 4,
    name: "Leather Backpack",
    price: 1899,
    image:
      "https://images.unsplash.com/photo-1553062407-98eeb64c6a62?w=600&h=600&fit=crop",
  },
  {
    id: 5,
    name: "Sunglasses",
    price: 1299,
    image:
      "https://images.unsplash.com/photo-1511499767150-a48a237f0083?w=600&h=600&fit=crop",
  },
  {
    id: 6,
    name: "Coffee Mug",
    price: 599,
    image:
      "https://images.unsplash.com/photo-1514228742587-6b1558fcca3d?w=600&h=600&fit=crop",
  },
  {
    id: 7,
    name: "Mechanical Keyboard",
    price: 5499,
    image:
      "https://images.unsplash.com/photo-1587829741301-dc798b83add3?w=600&h=600&fit=crop",
  },
  {
    id: 8,
    name: "Casual T-Shirt",
    price: 899,
    image:
      "https://images.unsplash.com/photo-1521572163474-6864f9cf17ab?w=600&h=600&fit=crop",
  },
  {
    id: 9,
    name: "Modern Chair",
    price: 7499,
    image:
      "https://images.unsplash.com/photo-1503602642458-232111445657?w=600&h=600&fit=crop",
  },
  {
    id: 10,
    name: "Smartphone",
    price: 24999,
    image:
      "https://images.unsplash.com/photo-1511707171634-5f897ff02aa9?w=600&h=600&fit=crop",
  },
  {
    id: 11,
    name: "Bluetooth Speaker",
    price: 1999,
    image:
      "https://images.unsplash.com/photo-1608043152269-423dbba4e7e1?w=600&h=600&fit=crop",
  },
  {
    id: 12,
    name: "Digital Camera",
    price: 32999,
    image:
      "https://images.unsplash.com/photo-1516035069371-29a1b244cc32?w=600&h=600&fit=crop",
  },
];

let LocalCartItem = JSON.parse(localStorage.getItem("localCart")) || [];

function showProductList() {
  const productList = document.getElementById("product-list");

  productList.innerHTML = "";

  products.forEach((p) => {
    productList.innerHTML += `
        
        <div class="col-md-4 p-3">
        <div class="card product-card" >
  <img src="${p.image}" class="card-img-top" alt="${p.name}">
  <div class="card-body">
    <h5 class="card-title">${p.name}</h5>
    <p class="card-text">${p.price}</p>
    <button class="btn btn-primary" onclick="addToCart(${p.id})" >add to card</button>
  </div>
</div>
        
        </div>

        `;
  });
}

showProductList();

function addToCart(id) {
  try {
    let productItem = LocalCartItem.find((p) => p.id === id);

    if (productItem) {
      let productQty = productItem.qty++;

      console.log("qty", productQty);
    } else {
      productItem = products.find((p) => p.id === id);

      LocalCartItem.push({ ...productItem, qty: 1 });
    }

    updateLocalStorage();
    alert("product added");
  } catch (error) {
    console.log(error);
  }
}

function updateLocalStorage() {
  localStorage.setItem("localCart", JSON.stringify(LocalCartItem));

  showCartData();

  grandTotal();
}

function showCartModal() {
  const cartModal = document.getElementById("cartModal");

  const modal = new bootstrap.Modal(cartModal);

  modal.show();

  showCartData();
  grandTotal();
}

function showCartData() {
  const tableBody = document.getElementById("table-body");

  tableBody.innerHTML = "";

  LocalCartItem.forEach((p, index) => {
    tableBody.innerHTML += `
    
    <tr key={index}>
    <td>${index + 1}</td>
    <td><img class=cartProductImage src=${p.image}  alt=${p.name} ><img/></td>
    <td>${p.name}</td>
    <td>${p.price}</td>
    <td>
    <div class="d-flex justify-content-center align-items-center gap-2"   >
    <button  class="btn btn-success" onClick="increaseQty(${p.id})" >+</button>
    <h5>${p.qty}</h5>
     <button  class="btn btn-warning" onClick="decreaseQty(${p.id})" >-</button>
    </div>
    </td>
    <td>
    <h5>₹${p.qty * p.price} </h5>
    </td>
    <td>
    <button class="btn btn-danger"  onClick="removeProduct(${p.id})" > Remove</button>
    </td>
    </tr>
    `;
  });
}

function increaseQty(id) {
  try {
    const product = LocalCartItem.find((p) => p.id === id);

    if (product) {
      product.qty++;
    }

    updateLocalStorage();
  } catch (error) {
    console.log(error);
  }
}

function decreaseQty(id) {
  try {
    const index = LocalCartItem.findIndex((p) => p.id === id);

    if (index === -1) {
      throw new Error("product not found");
    }

    const product = LocalCartItem.find((p) => p.id === id);

    if (product) {
      product.qty--;
    }

    if (product.qty === 0) {
      LocalCartItem.splice(index, 1);
    }

    updateLocalStorage();
  } catch (error) {
    console.log(error);
  }
}

// function removeProduct(id) {
//   try {
//     LocalCartItem = LocalCartItem.filter((p) => p.id !== id);
//     updateLocalStorage();
//   } catch (error) {
//     console.log(error);
//   }
// }

function removeProduct(id) {
  const index = LocalCartItem.findIndex((p) => p.id === id);

  LocalCartItem.splice(index, 1);

  updateLocalStorage();
}

function grandTotal() {
  const total = document.getElementById("GrandTotal");

  total.innerHTML = "";

  const totalAmounts = LocalCartItem.reduce((acc, curr) => {
    return (acc += curr.price * curr.qty);
  }, 0);

  total.innerHTML = `<h5>${totalAmounts}</h5>`;
}
