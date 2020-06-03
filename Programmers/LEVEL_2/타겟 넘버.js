function solution(numbers, target) {
  var answer = 0;

  dfs(0);

  function dfs(n) {
    if (n === numbers.length) {
      let sum = 0;
      for (let i in numbers) {
        sum += numbers[i];
      }
      if (sum === target) answer++;
      return;
    } else {
      numbers[n] *= 1;
      dfs(n + 1);
      numbers[n] *= -1;
      dfs(n + 1);
    }
  }

  return answer;
}
