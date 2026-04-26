const FS = require("fs");

//while (1) {
let input = FS.readFileSync("/dev/stdin")
  .toString()
  .trim()
  .split("\n")
  .map((el) => el.split(" ").map(Number));

for (let sides of input) {
  sides.sort((a, b) => a - b);
  [X, Y, Z] = [...sides];
  if (!X && !Y && !Z) {
    break;
  } else if (Z ** 2 === X ** 2 + Y ** 2) {
    console.log("right");
  } else console.log("wrong");
}