function solution(brown, yellow) {
  var answer = [];
  // 가로 * 세로 = borwn + yellow
  // 처음 느낌은 sum을 i로 나눌 때 차이가 가장 적은 수가 정답일 것 같다.
  // 오류 발생 : 18,6 일 때 [8,3] 이어야하는데 [6,4]가 나온다.

  // 다른 방법 생각
  let flag = false;
  for (let i = 1; i <= yellow; i++) {
    for (let j = 1; j <= i; j++) {
      if (i * j === yellow) {
        if ((i + 2) * (j + 2) - yellow === brown) {
          answer = [i + 2, j + 2];
          flag = true;
          break;
        }
      }
    }
    if (flag) break;
  }

  return answer;
}
