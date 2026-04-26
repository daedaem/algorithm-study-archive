const input = require("fs")
  .readFileSync("/dev/stdin")
  .toString()
  .trim().length;
console.log(input);
