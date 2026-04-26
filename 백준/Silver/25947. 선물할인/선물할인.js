const [[n, b, a], presentList] = require("fs")
  .readFileSync("/dev/stdin")
  .toString()
  .split("\n")
  .map((el) => {
    return el.split(" ").map(Number);
  });
presentList.sort((a, b) => a - b);

let start = -1;
let end = n + 1;
let mid;
while (start + 1 < end) {
  mid = Math.floor((start + end) / 2);
  let sum = b;
  for (let i = mid - 1; i >= Math.max(0, mid - a); i--) {
    sum -= presentList[i] / 2;
    if (sum < 0) break;
  }
  for (let i = mid - a - 1; i >= 0; i--) {
    sum -= presentList[i];
    if (sum < 0) break;
  }
  if (sum >= 0) start = mid;
  else end = mid;
}
console.log(start);