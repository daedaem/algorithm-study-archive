const IN = require("fs")
  .readFileSync("/dev/stdin")
  .toString()
  .trim()
  .split("\n");

const [N, M] = IN.shift().split(" ").map(Number);
const K = Number(IN.pop());
const lamps = IN.map((el) => el.trim());
const maps = new Map();
lamps.forEach((lamp) => {
  if (maps.has(lamp)) {
    maps.set(lamp, maps.get(lamp) + 1);
  } else {
    let result = 0;
    lamp.split("").forEach((el) => {
      if (el == "0") return ++result;
      return 0;
    });
    if (result % 2 == K % 2 && result <= K) {
      maps.set(lamp, 1);
    }
  }
});
console.log(maps.size == 0 ? 0 : Math.max(...maps.values())); 