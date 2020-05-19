function solution(n) {
  var answer = 0;

  let arr = [];
  arr.push(false);
  arr.push(false);
  for (let i = 2; i <= n; i++) {
    arr.push(true);
  }

  for (let i = 2; i * i <= n; i++) {
    if (arr[i]) {
      for (let j = i * i; j <= n; j += i) {
        arr[j] = false;
      }
    }
  }

  for (let flag of arr) {
    if (flag) answer++;
  }

  return answer;
}
