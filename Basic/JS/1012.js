/**
 * @author: kurumi
 * @date: 2025-10-26
 * @description: 1012 数字分类
 */
const rl = require("readline").createInterface({input: process.stdin});
const iter = rl[Symbol.asyncIterator]();
const readline = async () => (await iter.next()).value;

void (async function() {
  const [n, ...nums] = (await readline()).split(" ").map(Number);
  let a1 = 0, a2 = 0, a3 = 0, sum4 = 0, cnt4 = 0, max5 = 0;
  let a2Exist = false;
  let flag = 1;
  for (const num of nums) {
    if (num % 5 == 0 && num % 2 == 0) {
      a1 += num;
    } else if (num % 5 == 1) {
      a2Exist = true;
      a2 += flag * num;
      flag *= -1;
    } else if (num % 5 == 2) {
      ++a3;
    } else if (num % 5 == 3) {
      sum4 += num;
      ++cnt4;
    } else if (num % 5 == 4 && num > max5) {
      max5 = num;
    }
  }
  console.log(`${a1 == 0 ? "N" : a1} ${a2Exist ? a2 : "N"} ${a3 == 0 ? "N" : a3} ${cnt4 == 0 ? "N" : (sum4 / cnt4).toFixed(1)} ${max5 == 0 ? "N" : max5}`);
})();