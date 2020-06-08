function solution(land) {
  var answer = 0;
  let dp = [];
  let temp;

  for (let i = 0; i < land.length; i++) {
    dp.push(land[i]);
  }
  for (let i = 1; i < land.length; i++) {
    for (let j = 0; j < land[i].length; j++) {
      temp = 0;
      for (let k = 0; k < land[i].length; k++) {
        if (j == k) continue;
        temp = Math.max(temp, land[i][j] + dp[i - 1][k]);
      }
      dp[i][j] = temp;
    }
  }
  console.log(dp);
  answer = Math.max.apply(null, dp[dp.length - 1]);
  return answer;
}
