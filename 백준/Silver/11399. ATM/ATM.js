const [[N], PS] = require("fs")
  .readFileSync("/dev/stdin")
  .toString()
  .split("\n");

const arr = PS.split(" ")
  .map(Number)
  .sort((a, b) => a - b);
const dp = new Array(N + 1).fill(0);
dp[0] = arr[0];
const result = arr.reduce((init, val, idx) => {
  if (idx >= 1) {
    dp[idx] = dp[idx - 1] + val;
    return (init += dp[idx]);
  } else return (init += dp[idx]);
}, 0);

console.log(result);
