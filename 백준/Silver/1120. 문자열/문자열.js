const [A, B] = require("fs")
  .readFileSync("/dev/stdin")
  .toString()
  .trim()
  .split(" ");
let maxValue = 51;
for (let i = 0; i <= B.length - A.length; i++) {
  let result = 0;
  for (let k = 0; k < A.length; k++) {
    if (A[k] !== B[i + k]) result++;
  }
  if (maxValue > result) maxValue = result;
}
console.log(maxValue);