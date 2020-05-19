function solution(x, n) {
  var answer = [];

  let temp = x;
  for (let i = 0; i < n; i++) {
    answer.push(x);
    x += temp;
  }

  return answer;
}
