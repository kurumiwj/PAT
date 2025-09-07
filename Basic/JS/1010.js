/**
 * @author: kurumi
 * @date: 2025-09-07
 * @description: 1010 一元多项式求导
 */
const rl = require("readline").createInterface({input: process.stdin});
const iter = rl[Symbol.asyncIterator]();
const readline = async () => (await iter.next()).value;

void (async function() {
  const nums = (await readline()).split(" ").map(Number);
  let isFirst = true;
  for (let i = 0; i < nums.length; i+=2) {
    if (nums[i + 1] > 0) {
      if (isFirst) isFirst = false;
      else process.stdout.write(" ");
      process.stdout.write(`${nums[i] * nums[i + 1]} ${nums[i + 1] - 1}`)
    }
  }
  if (isFirst) process.stdout.write("0 0");
})();