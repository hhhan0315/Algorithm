function solution(dirs) {
  var answer = 0;
  let set = new Set();

  let dx = [-1, 0, 1, 0];
  let dy = [0, -1, 0, 1];
  let order = { L: 0, D: 1, R: 2, U: 3 };
  let x = 0; // 시작 좌표
  let y = 0;

  let arr = dirs.split("");
  for (let i = 0; i < arr.length; i++) {
    let d = order[arr[i]];
    let nx = x + dx[d];
    let ny = y + dy[d];
    if (nx > 5 || nx < -5 || ny > 5 || ny < -5) continue;

    if (!set.has(`${x}~${y}~${nx}~${ny}`)) {
      set.add(`${x}~${y}~${nx}~${ny}`); // 그냥 이런 형태로 저장해준것뿐
      // 처음에 [x,y,nx,ny] 이렇게 저장하니까 has가 무조건 false만 나왔다.
      set.add(`${nx}~${ny}~${x}~${y}`); // 양방향 연결(중요)
      answer++;
    }

    x = nx;
    y = ny;
  }

  return answer;
}
