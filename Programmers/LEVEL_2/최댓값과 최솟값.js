function solution(s) {
  var answer = "";
  let temp = s.split(" ");

  // ... : spread 연산자 : 열거가능한 오브젝트를 하나씩 전개
  answer += Math.min(...temp) + " " + Math.max(...temp);

  return answer;
}
