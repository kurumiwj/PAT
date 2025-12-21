/**
 * @Author kurumi
 * @Date 2025-12-21
 * @Description 1015 德才论
 */
const rl = require("readline").createInterface({input: process.stdin});
const iter = rl[Symbol.asyncIterator]();
const readline = async () => (await iter.next()).value;

class Student {
  constructor(id, moral, ability) {
    this.id = id;
    this.moral = moral;
    this.ability = ability;
    this.total = moral + ability;
  }
  
  isAdmitted(l) {
    return this.moral >= l && this.ability >= l;
  }
  
  isMoralAndAbility(h) {
    return this.moral >= h && this.ability >= h;
  }
  
  isMoralMoreThanAbilityH(h) {
    return this.moral >= h && this.ability < h;
  }
  
  isMoralMoreThanAbilityL(h) {
    return this.moral < h && this.ability < h && this.moral >= this.ability;
  }
  
  compare(stu) {
    if (this.total == stu.total) {
      if (this.moral != stu.moral) return stu.moral - this.moral;
      return this.id.localeCompare(stu.id);
    }
    return stu.total - this.total;
  }
  
  toString() {
    return `${this.id} ${this.moral} ${this.ability}`;
  }
}

void (async function() {
  const [n, l, h] = (await readline()).split(" ").map(Number);
  const moralAndAbilityStudents = new Array();
  const moralMoreThanAbilityHStudents = new Array();
  const moralMoreThanAbilityLStudents = new Array();
  const otherStudents = new Array();
  for (let i = 0; i < n; i++) {
    const [id, moral, ability] = (await readline()).split(" ");
    const student = new Student(id, parseInt(moral), parseInt(ability));
    if (student.isAdmitted(l)) {
      if (student.isMoralAndAbility(h)) moralAndAbilityStudents.push(student);
      else if (student.isMoralMoreThanAbilityH(h)) moralMoreThanAbilityHStudents.push(student);
      else if (student.isMoralMoreThanAbilityL(h)) moralMoreThanAbilityLStudents.push(student);
      else otherStudents.push(student);
    }
  }
  moralAndAbilityStudents.sort((stu1, stu2) => stu1.compare(stu2));
  moralMoreThanAbilityHStudents.sort((stu1, stu2) => stu1.compare(stu2));
  moralMoreThanAbilityLStudents.sort((stu1, stu2) => stu1.compare(stu2));
  otherStudents.sort((stu1, stu2) => stu1.compare(stu2));
  
  console.log(moralAndAbilityStudents.length + moralMoreThanAbilityHStudents.length + moralMoreThanAbilityLStudents.length + otherStudents.length);
  moralAndAbilityStudents.forEach(stu => console.log(stu.toString()));
  moralMoreThanAbilityHStudents.forEach(stu => console.log(stu.toString()));
  moralMoreThanAbilityLStudents.forEach(stu => console.log(stu.toString()));
  otherStudents.forEach(stu => console.log(stu.toString()));
})();