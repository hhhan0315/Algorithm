function solution(nums) {
  var answer = 0;

  let arr = nums.sort((a, b) => b - a);

  let max = 0;
  for (let i = 0; i <= 2; i++) {
    max += arr[i];
  }

  function check(num) {
    let visited = [];
    visited[0] = 0;
    visited[1] = 0;
    for (let i = 2; i <= num; i++) {
      visited[i] = 1;
    }

    for (let i = 2; i <= num; i++) {
      if (visited[i] === 0) continue;
      for (let j = i + i; j <= num; j += i) {
        visited[j] = 0;
      }
    }
    return visited;
  }

  let visited = check(max);
  let sum = 0;
  for (let i = 0; i < nums.length; i++) {
    for (let j = i + 1; j < nums.length; j++) {
      for (let k = j + 1; k < nums.length; k++) {
        sum = 0;
        sum += nums[i] + nums[j] + nums[k];
        if (visited[sum] === 1) answer++;
      }
    }
  }

  return answer;
}
