/**
 * @author: kurumi
 * @date: 2025-09-07
 * @description: 1007 素数对猜想
 */
const rl = require("readline").createInterface({input: process.stdin});
const iter = rl[Symbol.asyncIterator]();
const readline = async () => (await iter.next()).value;

const initPrimes = (primes, n) => {
  primes[0] = false;
  primes[1] = false;
  for (let i = 2; i < n; i++) {
    for (let j = i; i * j <= n; j++) {
      primes[i * j] = false;
    }
  }
}

const countPrimes = primes => {
  let cnt = 0;
  for (let i = 2; i < primes.length; i++) {
    if (primes[i]&& primes[i - 2]) ++cnt;
  }
  return cnt;
}

void (async function() {
  const n = parseInt(await readline());
  const primes = new Array(n + 1).fill(true);
  initPrimes(primes, n)
  console.log(countPrimes(primes))
})();