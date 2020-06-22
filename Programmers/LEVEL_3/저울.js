function solution(weight) {
  var answer = 0;
  weight.sort((a, b) => a - b);

  answer += weight[0];
  // 1 1 2 3 6 7 30
  // 7까지 더한 값이 20인데 21 < 30 에서 break 하고
  // 21 ~ 29 까지 저울로 측정 불가하다는 의미
  for (let i = 1; i < weight.length; i++) {
    if (answer + 1 < weight[i]) break;
    answer += weight[i];
  }

  answer += 1;
  return answer;
}
