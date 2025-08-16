/**
 * @author: kurumi
 * @date: 2025-08-16 21:45
 * @description: 1002 写出这个数
 */
const rl = require("readline").createInterface({input: process.stdin});
const iter = rl[Symbol.asyncIterator]();
const readline = async () => (await iter.next()).value;

function calEachNumSum(n) {
  return n.split("").map(n => parseInt(n)).reduce((pre, cur) => pre + cur, 0);
}

function readNumInCN(n) {
  const numMap = {
    "1": "yi",
    "2": "er",
    "3": "san",
    "4": "si",
    "5": "wu",
    "6": "liu",
    "7": "qi",
    "8": "ba",
    "9": "jiu",
    "0": "ling"
  };
  return String(n).split("").map(ch => numMap[ch]).join(" ");
}

void(async function() {
  const n = await readline();
  console.log(readNumInCN(calEachNumSum(n)));
})();