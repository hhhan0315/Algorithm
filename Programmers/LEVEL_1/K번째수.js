function solution(array, commands) {
  var answer = [];

  for (var i = 0; i < commands.length; i++) {
    var temp = array
      .slice(commands[i][0] - 1, commands[i][1])
      .sort(function (a, b) {
        return a - b;
      });
    // 그냥 sort()만 하면 문자열 유니코드 순서로 정렬하기 때문에 결과가 달라진다.
    // const array1 = [1, 30, 4, 21, 100000]; 일때 그냥 sort() 실행하면 결과는 아래처럼
    // expected output: Array [1, 100000, 21, 30, 4]

    answer.push(temp[commands[i][2] - 1]);
  }

  return answer;
}
