const mountaineer = {
  name: "nirmal purja",
  nickName: "Nims dai",
  age: 43,
  record: "52*8000",

};

// access

console.log("name",mountaineer.name)

console.log("nick name",mountaineer["nickName"])


// modify


mountaineer.age=48

mountaineer["age"] = 46

console.log("age",mountaineer)

// adding properties

mountaineer.country = "nepal"

console.log("country",mountaineer.country)

console.log(mountaineer)