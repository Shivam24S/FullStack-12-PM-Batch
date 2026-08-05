class Car {
  constructor(name, year, engine, color) {
    ((this.name = name),
      (this.year = year),
      (this.engine = engine),
      (this.color = color));
  }
}

const car1 = new Car("defender", 2026, "v8", "black");

const car2 = new Car("g-wagon", 2026, "v12", "blue");

const car3 = new Car("m5", 2026, "v12", "green");

console.log("car1", car1);

console.log("car2", car2);

console.log("car3", car3);
