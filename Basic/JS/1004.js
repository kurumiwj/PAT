/**
 * @author: kurumi
 * @date: 2025-08-23 14:29
 * @description: 1004 成绩排名
 */
const rl = require("readline").createInterface({input: process.stdin});
const iter = rl[Symbol.asyncIterator]();
const readline = async () => (await iter.next()).value;

class Student {
  constructor(name, id, score) {
    this.name = name;
    this.id = id;
    this.score = score;
  }
}

void (async function() {
  const n = parseInt(await readline());
  let minScore = 101, maxScore = -1, minStu = new Student(), maxStu = new Student();
  for (let i = 0; i < n; i++) {
    const args = (await readline()).split(" ");
    const score = parseInt(args[2]);
    if (score > maxScore) {
      maxScore = score;
      maxStu = new Student(args[0], args[1], score);
    }
    if (score < minScore) {
      minScore = score
      minStu = new Student(args[0], args[1], score);
    }
  }
  console.log(`${maxStu.name} ${maxStu.id}`);
  console.log(`${minStu.name} ${minStu.id}`);
})();