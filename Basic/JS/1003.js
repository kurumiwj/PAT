/**
 * @author: kurumi
 * @date: 2025-08-17 13：45
 * @description: 1003 我要通过！
 */
const rl = require("readline").createInterface({input: process.stdin});
const iter = rl[Symbol.asyncIterator]();
const readline = async () => (await iter.next()).value;

// 字符串中必须仅有 P、 A、 T这三种字符
function checkAllChPAT(input) {
  const PATList = ["P", "A", "T"];
  return input.split("").every(ch => PATList.includes(ch));
}

// 判断P、T数量是否一个
function isPTExistOne(input) {
  const chs = input.split("");
  return chs.indexOf("P") == chs.lastIndexOf("P") && chs.indexOf("T") == chs.lastIndexOf("T");
}

// 判断T是否在P右边且中间有其他字符
function TRightP(input) {
  const chs = input.split("");
  return chs.indexOf("T") - chs.indexOf("P") > 1;
}

// 判断字符串左右两边A是否奇偶一致
function bothSideOddOrEven(input) {
  const chs = input.split("");
  const indexP = chs.indexOf("P");
  const indexT = chs.indexOf("T");
  const leftCnt = indexP, rightCnt = input.length - 1 - indexT;
  return leftCnt % 2 == rightCnt % 2;
}

void(async function() {
  const n = parseInt(await readline());
  for (let i = 0; i < n; i++){
    if (i != 0) {
      console.log();
    }
    const input = await readline();
    if (!checkAllChPAT(input)) {
      process.stdout.write("NO");
      continue;
    }
    if (!isPTExistOne(input)) {
      process.stdout.write("NO");
      continue;
    }
    if (!TRightP(input)) {
      process.stdout.write("NO");
      continue;
    }
    if (!bothSideOddOrEven(input)) {
      process.stdout.write("NO");
      continue;
    }
    process.stdout.write("YES");
  }
})();