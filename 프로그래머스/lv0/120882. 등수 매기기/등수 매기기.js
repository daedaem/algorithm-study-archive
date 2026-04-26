function solution(score) {
  return score.map((el) => {
    return score.reduce(
      (init, value) => init += (value[0] + value[1]) / 2 > (el[0] + el[1]) / 2,
      1
    );
  });
}
