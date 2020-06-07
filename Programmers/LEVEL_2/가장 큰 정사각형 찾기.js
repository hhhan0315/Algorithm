function solution(board) {
  // 생각이 안나서 찾아보니 동적 계획법으로 푼다.
  var answer = 0;
  let x = board[0].length;
  let y = board.length;

  if (x < 2 || y < 2) return 1;

  for (let i = 1; i < y; i++) {
    for (let j = 1; j < x; j++) {
      if (board[i][j] > 0) {
        let min = Math.min(board[i - 1][j - 1], board[i - 1][j], board[i][j - 1]);
        board[i][j] = min + 1;
      }
      if (answer < board[i][j]) {
        answer = board[i][j];
      }
    }
  }

  return answer * answer;
}
