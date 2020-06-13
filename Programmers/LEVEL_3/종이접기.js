function solution(n) {
  var answer = [0];
  // 사이사이에 0과 1을 번갈아 가면서 넣기
  // 0 -> 0 (0) 1 -> 0 (0) 1 (0) 0 (1) 1

  let temp = [0];
  function func(temp) {
    let value = 0;
    for (let i = 0; i < temp.length; i++) {
      answer.push(value);
      answer.push(temp[i]);
      value = value == 0 ? 1 : 0;
    }
    answer.push(value);
    return answer;
  }

  for (let i = 0; i < n - 1; i++) {
    temp = answer;
    answer = [];
    func(temp);
  }

  return answer;
}
