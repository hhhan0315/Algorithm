function solution(n) {
  var answer = 0;

  let arr = [0, 1, 2];

  if (n == 1 || n == 2) {
    return arr[n];
  }

  for (let i = 3; i <= n; i++) {
    arr[i] = (arr[i - 2] + arr[i - 1]) % 1000000007;
  }

  answer = arr[n];

  return answer;
}
