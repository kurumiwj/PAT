/**
 * @author: kurumi
 * @date: 2025-08-16 19:34
 * @description: 1001 害死人不偿命的(3n+1)猜想
 */
const rl = require("readline").createInterface({input: process.stdin});
const iter = rl[Symbol.asyncIterator]();
const readline = async () => (await iter.next()).value;

function isOdd(n) {
  return n % 2 != 0;
}

function isEven(n) {
  return n % 2 == 0;
}

function Callatz(n) {
  let step = 0
  while (n != 1) {
    if (isOdd(n)) {
      n = Math.ceil((3 * n + 1) / 2);
    } else {
      n /= 2
    }
    ++step;
  }
  return step;
}

void(async function() {
  const n = parseInt(await readline());
  console.log(Callatz(n));
})();
