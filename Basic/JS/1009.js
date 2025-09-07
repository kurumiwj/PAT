/**
 * @author: kurumi
 * @date: 2025-09-07
 * @description: 1009 说反话
 */
const rl = require("readline").createInterface({input: process.stdin});
const iter = rl[Symbol.asyncIterator]();
const readline = async () => (await iter.next()).value;

void (async function() {
  console.log((await readline()).split(" ").reverse().join(" "));
})();