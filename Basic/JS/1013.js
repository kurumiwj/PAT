/**
 * @author: kurumi
 * @date: 2025-11-08
 * @description: 1013 数素数
 */
const rl = require("readline").createInterface({input: process.stdin});
const iter = rl[Symbol.asyncIterator]();
const readline = async () => (await iter.next()).value;

const primeIndex = {
  start: 0,
  end: 0
};
const MAX = 110000;
const primes = new Array(MAX).fill(true);

function countPrimes(m, n) {
  let cnt = 0;
  primes[1] = false;
  primes[2] = true;
  for (let i = 2; i < primes.length; i++) {
    if (primes[i]) {
      ++cnt;
      if (cnt == m) primeIndex.start = i;
      if (cnt == n) {
        primeIndex.end = i;
        break;
      }
      for (let j = i; i * j <= MAX; j++) primes[i * j] = false;
    }
  }
}

void (async function () {
  const [m, n] = (await readline()).split(" ").map(Number);
  countPrimes(m, n);
  const rowMax = 10;
  let cnt = 0;
  for (let i = primeIndex.start; i <= primeIndex.end; i++) {
    if (primes[i]) {
      if (cnt % 10 == 0 && cnt != 0) {
        console.log();
      } else if (cnt % 10 != 0) {
        process.stdout.write(" ");
      }
      ++cnt;
      process.stdout.write(i.toString());
    }
  }
})();