/**
 * @author: kurumi
 * @date: 2025-09-06
 * @description: 1006 换个格式输出整数
 */
const rl = require("readline").createInterface({input: process.stdin});
const iter = rl[Symbol.asyncIterator]();
const readline = async () => (await iter.next()).value;

const toB = n => "B".repeat(n);
const toS = n => "S".repeat(n);
const toN = n => {
  let res = "";
  for (let i = 1; i <= n; i++) res += i;
  return res;
}

void (async function() {
  let str = "";
  let n = parseInt(await readline());
  str += toB(Math.floor(n / 100));
  n %= 100;
  str += toS(Math.floor(n / 10));
  n %= 10;
  str += toN(n);
  console.log(str);
})();