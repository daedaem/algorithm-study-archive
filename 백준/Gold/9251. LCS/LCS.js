const LCS = () => {
  for (let i = 1; i <= lenB; i++) {
    for (let k = 1; k <= lenA; k++) {
      if (B[i - 1] == A[k - 1]) {
        adjArr[i][k] = adjArr[i - 1][k - 1] + 1;
      } else {
        adjArr[i][k] = Math.max(adjArr[i - 1][k], adjArr[i][k - 1]);
      }
    }
  }
  console.log(adjArr[lenB][lenA]);
};

const [A, B] = require("fs")
  .readFileSync("/dev/stdin")
  .toString()
  .split("\n")
  .map((el) => el.trim());

const lenA = A.length;
const lenB = B.length;

const adjArr = Array.from(Array(2000), () => Array().fill());
for (let i = 0; i <= lenB; i++) {
  for (let j = 0; j <= lenA; j++) {
    adjArr[i][j] = 0;
  }
}
LCS();