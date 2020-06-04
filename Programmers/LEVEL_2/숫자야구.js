function solution(baseball) {
  var answer = 0;

  // 완전 탐색 (가능한 답을 모두 확인)
  for (let i = 123; i <= 987; i++) {
    let num = i + "";
    // 중복, 0 제외
    if (
      num.charAt(0) === num.charAt(1) ||
      num.charAt(0) === num.charAt(2) ||
      num.charAt(1) === num.charAt(2) ||
      num.charAt(1) === "0" ||
      num.charAt(2) === "0"
    )
      continue;

    let flag = true;
    for (let j = 0; j < baseball.length; j++) {
      let askNumber = baseball[j][0] + "";
      let strike = baseball[j][1];
      let ball = baseball[j][2];

      let countStrike = 0;
      for (let k = 0; k < 3; k++) {
        if (num[k] === askNumber[k]) countStrike++;
      }

      if (countStrike !== strike) {
        flag = false;
        break;
      }

      let countBall = 0;
      for (let k = 0; k < 3; k++) {
        if (askNumber.indexOf(num[k]) !== -1) countBall++;
      }

      // 123의 경우 , 324와 만났을 때 countStrike 1, countBall 2
      // countBall - countStrike = 1 이 나와야한다.
      if (countBall - countStrike !== ball) {
        flag = false;
        break;
      }
    }
    if (flag) answer++;
  }

  return answer;
}
