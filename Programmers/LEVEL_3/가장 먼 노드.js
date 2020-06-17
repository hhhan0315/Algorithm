function solution(n, edge) {
  var answer = 0;

  // 2차원 배열 생성
  const arr = Array(n + 1)
    .fill(null)
    .map(() => Array());
  let visited = Array(n + 1).fill(0);
  let dist = Array(n + 1).fill(0);
  let queue = [];

  // 각 노드 번호에서 연결되어 있는 노드 저장
  for (let i of edge) {
    // 양방향 저장
    arr[i[0]].push(i[1]);
    arr[i[1]].push(i[0]);
  }

  // 1부터 시작
  queue.push(1);
  visited[1] = 1;
  dist[1] = 0;

  while (queue.length != 0) {
    let start = queue.shift();
    for (let i = 0; i < arr[start].length; i++) {
      let value = arr[start][i];
      if (visited[value] == 0) {
        queue.push(value);
        visited[value] = true;
        dist[value] = dist[start] + 1;
      }
    }
  }

  let max = Math.max.apply(null, dist);
  for (let i = 0; i < dist.length; i++) {
    if (dist[i] == max) {
      answer++;
    }
  }

  return answer;
}
