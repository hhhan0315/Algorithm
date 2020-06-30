function solution(N, road, K) {
  var answer = 0;
  let arr = new Array(N + 1).fill(0).map((e) => []);
  let visited = new Array(N + 1).fill(0).map((e) => []);

  for (let i = 0; i < road.length; i++) {
    let a = road[i][0];
    let b = road[i][1];
    let time = road[i][2];
    arr[a].push([b, time]);
    arr[b].push([a, time]);
  }
  dfs(1, 0);
  visited[1][0] = 1; // 1에 방문

  function dfs(index, sum) {
    for (let i = 0; i < arr[index].length; i++) {
      let next = arr[index][i][0];
      let time = arr[index][i][1];
      if (sum + time > K) continue;
      if (visited[index][next] != 0 && visited[index][next] <= sum + time) continue;
      // 위에서 이미 K를 넘으면 방문 저장을 하지 않는다.
      visited[next][0] = 1; // next 에 방문여부 저장
      visited[index][next] = sum + time;
      dfs(next, sum + time);
    }
  }
  console.log(arr);
  console.log(visited);

  for (let i = 1; i <= N; i++) {
    if (visited[i][0] == 1) {
      answer++;
    }
  }
  // 어려움 이해가 잘 되지 않았다.
  return answer;
}
