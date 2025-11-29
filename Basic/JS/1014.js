/**
 * @author: kurumi
 * @date: 2025-11-29
 * @description: 1014 福尔摩斯的约会
 */
const rl = require("readline").createInterface({input: process.stdin});
const iter = rl[Symbol.asyncIterator]();
const readline = async () => (await iter.next()).value;

const isAlpha = str => str >= 'A' && str <= 'Z' || str >= 'a' && str <= 'z';
const isDigit = str => str >= '0' && str <= '9';

void (async function() {
  const str1 = await readline();
  const str2 = await readline();
  const str3 = await readline();
  const str4 = await readline();
  const dayList = ["MON", "TUE", "WED", "THU", "FRI", "SAT", "SUN"];
  let day = "", hour = "", minute = "";
  let position = 1;
  let ch1, ch2, ch3, ch4;
  for (let i = 0; i < str1.length && i < str2.length; i++) {
    ch1 = str1.charAt(i);
    ch2 = str2.charAt(i);
    if (ch1 == ch2) {
      if (position == 1 && ch1 >= 'A' && ch1 <= 'G') {
        day = dayList[ch1.charCodeAt(0) - 65];
        position = 2;
      } else if (position == 2) {
        if (isDigit(ch1)) {
          hour = '0' + ch1;
          break;
        } else if (ch1 >= 'A' && ch1 <= 'N') {
          hour = ch1.charCodeAt(0) - 55;
          break;
        }
      }
    }
  }
  for (let i = 0; i < str3.length && i < str4.length; i++) {
    ch3 = str3.charAt(i);
    ch4 = str4.charAt(i);
    if (ch3 == ch4 && isAlpha(ch3)) {
      minute = i >= 0 && i < 10 ? '0' + i : i.toString();
      break;
    }
  }
  process.stdout.write(`${day} ${hour}:${minute}`);
})();