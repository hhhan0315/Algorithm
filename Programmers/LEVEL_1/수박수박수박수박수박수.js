function solution(n) {
  var answer = "";

  let quo = Math.floor(n / 2);
  let remain = n % 2;

  for (let i = 0; i < quo; i++) {
    answer += "수박";
  }

  if (remain != 0) {
    answer += "수";
  }

  return answer;
}
