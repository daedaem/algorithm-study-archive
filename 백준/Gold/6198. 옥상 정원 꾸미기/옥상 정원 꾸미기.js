const fs = require("fs");
const input = fs.readFileSync("/dev/stdin").toString().split("\n");

const N = +input.shift();

let answer = 0;

const stack = [{ height: +input[N - 1], cnt: 0 }];
for (let i = N - 2; i >= 0; i--) {
  const nowHeight = +input[i];
  let curCount = 0;
  while (stack.length) {
    const { height, cnt } = stack[stack.length - 1];
    if (nowHeight > height) {
      curCount += cnt + 1;
      stack.pop();
      answer += cnt;
    } else {
      break;
    }
  }
  stack.push({ height: nowHeight, cnt: curCount });
}
while (stack.length !== 0) {
  const { cnt } = stack.pop();
  answer += cnt;
}
console.log(answer);
