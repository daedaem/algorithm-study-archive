const [N, ...input] = require("fs")
  .readFileSync("/dev/stdin")
  .toString()
  .trim()
  .split("\n")
  .map((el) => +el.trim());

// input.reverse();
const stack = [];
let result = "";
// let idx = 0;
let idx = 1;
for (let i = 0; i < N; i++) {
  while (idx <= input[i]) {
    stack.push(idx++);
    result += "+";
  }
  if (stack[stack.length - 1] > input[i]) {
    console.log("NO");
    return;
  }
  while (stack[stack.length - 1] >= input[i]) {
    stack.pop();
    result += "-";
  }
}
console.log(result.split("").join("\n"));
