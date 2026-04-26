const input = require("fs")
  .readFileSync("/dev/stdin")
  .toString()
  .trim()
  .split("\n")
  .map((el) => el.trim());

let word = "";
for (let i = 0; i < input[0].length; i++) {
  word += input[0][i] + input[1][i];
}

while (word.length > 2) {
  const arr = word.split("");
  const result = arr.reduce((init, val, idx) => {
    if (idx == arr.length - 1) {
      return init;
    } else {
      let newNum = (+val + +arr[idx + 1]) % 10;
      return (init += newNum.toString());
    }
  }, "");
  word = result;
}
console.log(word.length == 1 ? "0" + word : word);
