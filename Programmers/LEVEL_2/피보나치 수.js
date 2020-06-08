function solution(n) {
  var answer = 0;

  let fibo = [0, 1, 1];

  for (let i = 3; i <= n; i++) {
    fibo[i] = fibo[i - 2] + fibo[i - 1];
    fibo[i] %= 1234567;
  }

  answer = fibo[n];

  return answer;
}
