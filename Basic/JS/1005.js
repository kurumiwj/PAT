/**
 * @author: kurumi
 * @date: 2025-08-24 13:50
 * @description: 1005 继续(3n+1)猜想
 */
const rl = require("readline").createInterface({input: process.stdin});
const iter = rl[Symbol.asyncIterator]();
const readline = async () => (await iter.next()).value;

const calNums = new Set();
const keyNums = new Array(200).fill(false);

const isOdd = n => n % 2 != 0;

const isEven = n => n % 2 == 0;

const Callatz = n => {
  while (n != 1) {
    if (calNums.has(n)) {
      keyNums[n] = false;
      return;
    }
    calNums.add(n);
    if (isOdd(n)) {
      n = Math.ceil((3 * n + 1) / 2);
    } else {
      n /= 2;
    }
  }
}

void (async function (){
  const n = parseInt(await readline());
  res = new Array();
  nums = (await readline()).split(" ").map(s => parseInt(s));
  for (let num of nums) {
    keyNums[num] = true;
  }
  nums.forEach(num => Callatz(num));
  nums.forEach(num => {
    if (keyNums[num]) res.push(num);
  });
  res.sort((a, b) => b - a);
  console.log(res.join(" "));
})();