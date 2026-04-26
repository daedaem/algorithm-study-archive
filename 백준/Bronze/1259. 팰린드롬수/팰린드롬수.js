const FS = require("fs");
const input = FS.readFileSync("/dev/stdin").toString().trim().split("\n").map((el) => el.split(" ").map(Number));

for (let i = 0; i < input.length; i++) {
  let stand = input[i][0];
  if (!stand) break;
  stand = stand.toString().split("");
  let reversed = stand.slice().reverse();
  stand = stand.join("");
  reversed = reversed.join("");
  if (stand == reversed) console.log("yes");
  else console.log("no");

}
