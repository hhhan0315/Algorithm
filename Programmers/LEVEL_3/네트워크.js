function solution(n, computers) {
  var answer = 0;
  let visited = new Array(n).fill(0);

  for (let i = 0; i < n; i++) {
    if (visited[i] == 0) {
      dfs(i);
      answer++;
    }
  }

  // 연결되어진 것을 계속 탐색해서 visited=1 처리
  function dfs(num) {
    for (let i = 0; i < computers[num].length; i++) {
      if (computers[num][i] === 1 && visited[i] === 0) {
        visited[i] = 1;
        dfs(i);
      }
    }
  }

  return answer;
}
