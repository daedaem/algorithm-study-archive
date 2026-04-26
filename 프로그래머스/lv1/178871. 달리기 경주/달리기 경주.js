function solution(players, callings) {
  const charToIdx = new Map();
  const IdxToChar = new Map();
  players.map((el, idx) => {
    charToIdx[el] = idx;
    IdxToChar[idx] = el;
  });
  for (let i = 0; i < callings.length; i++) {
    const calledWord = callings[i];
    const idx = charToIdx[calledWord];
    const faster = IdxToChar[idx - 1];
    [charToIdx[faster], charToIdx[calledWord]] = [idx, idx - 1];
    [IdxToChar[idx], IdxToChar[idx - 1]] = [faster, calledWord];
  }
  return Object.values(IdxToChar);
}