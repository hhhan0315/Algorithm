function solution(n) {
  var answer = 0;
  let count = n + 1;
  while (true) {
    if (make(n) === make(count)) break;
    count++;
  }
  answer = count;
  return answer;
}

function make(num) {
  let count = 0;
  while (num > 0) {
    let temp = num % 2;
    if (temp === 1) count++;
    num = parseInt(num / 2, 10);
  }

  return count;
}
