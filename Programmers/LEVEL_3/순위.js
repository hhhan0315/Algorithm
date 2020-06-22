function solution(n, results) {
  var answer = 0;
  let win = new Array(n + 1).fill(0).map((e) => []);
  let lose = new Array(n + 1).fill(0).map((e) => []);
  // win : i번 선수를 이긴 명단
  // lose : i 번 선수에게 진 명단

  for (let i = 0; i < results.length; i++) {
    win[results[i][1]].push(results[i][0]);
    lose[results[i][0]].push(results[i][1]);
  }

  for (let i = 1; i <= n; i++) {
    for (let j = 0; j < lose[i].length; j++) {
      for (let k = 0; k < win[i].length; k++) {
        if (!win[lose[i][j]].includes(win[i][k])) {
          win[lose[i][j]].push(win[i][k]);
        }
      }
    }
    for (let j = 0; j < win[i].length; j++) {
      for (let k = 0; k < lose[i].length; k++) {
        if (!lose[win[i][j]].includes(lose[i][k])) {
          lose[win[i][j]].push(lose[i][k]);
        }
      }
    }
  }
  // lose[2] = 5;
  // win[2] = 4,3,1;
  // win[5] 가 4 3 1 안 가지고 있으면 win[5]에도 4 3 1 push -> 2번에게 5번이 졌기 때문에 자동으로 2번을 이긴 win 집합도
  // 5번을 이겼다는 의미

  // 반대로 win[2] = 4,3,1
  // lose[4].push(lose[2]); -> 5 push
  // 찾아보고 해결했다 이해하기 어려웠음

  for (let i = 1; i <= n; i++) {
    if (win[i].length + lose[i].length == n - 1) {
      answer++;
    }
  }

  console.log(win);
  console.log(lose);

  return answer;
}
