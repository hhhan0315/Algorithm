function solution(n) {
  var answer = 0;

  let num = 1;
  while (true) {
    if (num * num == n) break;
    if (num * num > n) {
      num = -1;
      break;
    }
    num++;
  }

  if (num == -1) {
    answer = -1;
  } else {
    answer = (num + 1) * (num + 1);
  }

  return answer;
}
