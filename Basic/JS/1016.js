/**
 * @Author kurumi
 * @Date 2026-01-10 19:04:00
 * @Description 1016 部分A+B
 */
const rl = require("readline").createInterface({input: process.stdin});
const iter = rl[Symbol.asyncIterator]();
const readline = async () => (await iter.next()).value;

function calculate(n, p) {
  return n.toString()
    .split("")
    .map(Number)
    .filter(num => num == p)
    .reduce((a, b) => a * 10 + b, 0);
}

void (async function () {
  const [a, pa, b, pb] = (await readline()).split(" ");
  console.log(calculate(a, pa) + calculate(b, pb));
})();