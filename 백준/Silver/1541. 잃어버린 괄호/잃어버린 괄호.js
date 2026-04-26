const INPUT = require("fs")
  .readFileSync("/dev/stdin")
  .toString()
  .trim()
  .split("-")
  .map((el) =>
    el
      .split("+")
      .map(Number)
      .reduce((sums, val) => sums + val)
  );
const result = INPUT[0] * 2 + INPUT.reduce((sums, val) => sums - val, 0);
console.log(result);