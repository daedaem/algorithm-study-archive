const input = require("fs")
  .readFileSync("./dev/stdin")
  .toString()
  .trim()
  .split("")
  .map((el) => {
    if (el >= "a" && el <= "z") {
      el = el.toUpperCase();
      return el;
    } else {
      el = el.toLowerCase();
      return el;
    }
  })
  .join("");


console.log(input);
