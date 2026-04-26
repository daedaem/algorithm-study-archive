let input = require("fs")
  .readFileSync("/dev/stdin")
  .toString()
  .trim()
  .split("\n");
input.shift();
input = input.map((el) => {
  el = el.trim();
  console.log(el[0] + el[el.length - 1]);
});