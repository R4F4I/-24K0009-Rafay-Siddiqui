console.log("EXTERNALs JS");

var muName = "Age";
console.log(muName);
muName = "Chnaged";
console.log(muName);

let Myname = "rew";
console.log(Myname);

/*
let score = 12;

console.log(score);

score  =50;
console.log(score);
 */




if(true){
    // let is block scoped
    let greetigns = "good moreinign "
    console.log(greetigns);
}
//console.log(greetigns); // this will not run outside the if block

const pi = 3.14159;
console.log(pi);

let score = 100;
console. log(score); // Output: 100

// Re-assign a new value
console.log(score); // Output: 200

// let score = 300; // SyntaxError: Identifier 'score' has already been declared in this block

// Declare and assign a value

score = 200;


// an object

const user = { name: "Alice", age: 25 , time: 34};

// You can modify the properties of the object
// you cannot reassign the object itself
user.age = 26;
console. log(user.name); // Output: Alice
console. log(user.age); // Output: 26
console. log(user.time); // Output: 34


function gree(name) {
    return "Hello " + name
}
let message = gree("John");
console.log(message);