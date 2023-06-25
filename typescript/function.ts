#!/usr/bin/env ts-node

function add(a: number, b: number): number {
  return a+b;
}

// optional parameters
function mul(a: number, b: number, c?:number): number {
  if(c) {
    return a*b*c;
  }
  return a*b;
}

// rest parameters
function total(...args: number[]): void {
  let total = 0;

  args.forEach((arg) => total += arg);
  console.log(total);
}

total(12, 1, 3, 4);

console.log(mul(1, 2));

let ans = add(3, 4);
console.log(ans);
