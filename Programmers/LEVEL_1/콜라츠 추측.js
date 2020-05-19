function solution(num) {
  var answer = 0;

  let cnt = 0;
  while (num != 1) {
    if (cnt == 500) {
      return -1;
    }
    if (num % 2 == 0) {
      num = parseInt(num / 2, 10);
    } else {
      num = parseInt(num * 3 + 1, 10);
    }

    cnt++;
  }

  answer = cnt;
  return answer;
}
