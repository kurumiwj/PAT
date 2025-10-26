/**
 * @author: kurumi
 * @date: 2025-10-25
 * @description: 1011 A+B 和 C
 */
const rl = require("readline").createInterface({input: process.stdin});
const iter = rl[Symbol.asyncIterator]();
const readline = async () => (await iter.next()).value;

void (async function() {
  const n = parseInt(await readline());
  for (let i = 1; i <= n; i++) {
    const nums = (await readline()).split(" ").map(BigInt);
    console.log(`Case #${i}: ${nums[0] + nums[1] > nums[2]}`);
  }
})();