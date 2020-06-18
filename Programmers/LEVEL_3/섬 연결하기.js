function solution(n, costs) {
  var answer = 0;

  costs.sort((a, b) => a[2] - b[2]);
  let bridge = [];
  let visited = [];

  visited[costs[0][0]] = true;
  visited[costs[0][1]] = true;
  bridge[0] = true;
  answer += costs[0][2];
  let island = 2; // 방문한 섬의 개수

  while (island < n) {
    for (let i = 1; i < costs.length; i++) {
      // 처음에 섬이 나눠져 있을 때도 다 방문한 것으로 코드 작성해서 실패
      if (
        // 다리를 아직 안만들고 한쪽은 연결되어있고 다른 한쪽은 연결되어 있지않을때 연결 실시
        (!bridge[i] && visited[costs[i][0]] && !visited[costs[i][1]]) ||
        (!visited[costs[i][0]] && visited[costs[i][1]])
      ) {
        bridge[i] = true;
        visited[costs[i][0]] = true;
        visited[costs[i][1]] = true;
        answer += costs[i][2];
        island++;
        break;
      }
    }
  }

  return answer;
}
