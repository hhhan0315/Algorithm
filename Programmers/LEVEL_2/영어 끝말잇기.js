function solution(n, words) {
  var answer = [];
  let visited = [];
  let flag = true;
  visited.push(words[0]);
  let last = words[0].substring(words[0].length - 1, words[0].length);

  for (let i = 1; i < words.length; i++) {
    let user = i % n; // 둘다 나중에 +1
    let count = Math.floor(i / n);
    let first = words[i].substring(0, 1);

    if (last !== first) {
      answer.push(user + 1, count + 1);
      flag = false;
      break;
    } else if (visited.indexOf(words[i]) != -1) {
      answer.push(user + 1, count + 1);
      flag = false;
      break;
    } else {
      last = words[i].substring(words[i].length - 1, words[i].length);
    }
    visited.push(words[i]);
  }

  if (flag == true) {
    answer.push(0, 0);
  }

  return answer;
}
