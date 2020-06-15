function solution(N) {
  var answer = 0;
  let arr = [0, 1, 1];
  for (let i = 3; i <= N; i++) {
    arr[i] = arr[i - 2] + arr[i - 1];
  }
  answer = (arr[N - 1] + arr[N]) * 2 + arr[N] * 2;
  return answer;
}
