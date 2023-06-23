#!/usr/bin/env ts-node

let firstName = "Wale";
//firstName = 1;
const lastNames: string[] = ["Adenuga", "Adebayo", "Adeola"];

function myName(firstname: string, lastNames: string[]) {
  for (let lastName of lastNames)
    console.log(`${firstname} ${lastName}`);
}

myName(firstName, lastNames);
