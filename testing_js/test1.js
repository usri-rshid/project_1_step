#!/usr/bin/node


let first_n =10;
let second_n = 4;
let sum;
let sub;
let mult;
let div;
let mod;
console.log("First number is : "+ first_n);
console.log("Second number is : "+ second_n);
console.log();
sum = first_n + second_n;
sub = first_n - second_n;
mult = first_n * second_n;
div = first_n / second_n;
mod = first_n % second_n;
console.log(`Sum is ${sum}\n`);
console.log(`Sub is ${sub}\n`);
console.log(`Mult is ${mult}\n`);
console.log(`Div is ${div}\n`);
console.log(`Mod is ${mod}\n`);
let message = `First number is ${first_n}\nSecond number is ${second_n}\n<br>Sum is ${sum}\n<br>Sub is ${sub}\n<br>Mult is ${mult}\n<br>Div is ${div}\n<br>Mod is ${mod}\n `;

document.getElementById("message").innerHTML = message; 

document.write (message);