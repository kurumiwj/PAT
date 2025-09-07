/**
 * @author: kurumi
 * @date: 2025-09-07
 * @description: 1008 数组元素循环右移问题
 */
const rl = require("readline").createInterface({input: process.stdin});
const iter = rl[Symbol.asyncIterator]();
const readline = async () => (await iter.next()).value;

void (async function() {
  const [n, m] = (await readline()).split(" ").map(Number);
  const nums = (await readline()).split(" ");
  const res = new Array();
  for (let i = n - m % n; i < n; i++) res.push(nums[i]);
  for (let i = 0; i < n - m % n; i++) res.push(nums[i]);
  console.log(res.join(" "));
})();