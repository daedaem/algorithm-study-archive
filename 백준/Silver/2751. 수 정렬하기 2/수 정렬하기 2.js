const input = require("fs")
  .readFileSync("/dev/stdin", "utf8")
  .toString()
  .trim()
  .split("\n")
  .map((el) => Number(el));

const ns = input.shift();
let newarr = input.sort((a, b) => a - b);
console.log(newarr.join("\n"));
