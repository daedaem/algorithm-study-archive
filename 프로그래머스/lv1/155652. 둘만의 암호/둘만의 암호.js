2
3
4
5
6
7
8
9
10
11
12
const solution = (s, skip, index) => {
  let ans = '';
  const matched = 'abcdefghijklmnopqrstuvwxyz'.match(
    new RegExp(`[^${skip}]`, 'g'),
  );
  for (const c of s) {
    const newIdx = matched.indexOf(c) + index;
    ans += matched[newIdx % matched.length];
  }
  return ans;
};
