function solution(n, s) {
  var answer = [];

  if (n > s) {
    return [-1];
  }

  let quo = Math.floor(s / n);
  let remain = s % n;
  for (let i = 0; i < n; i++) {
    if (remain == 0) {
      answer.push(quo);
    } else {
      answer.push(quo + 1);
      remain--;
    }
  }
  answer.reverse();
  return answer;
}
