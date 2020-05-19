function solution(n) {
  // var answer = 0;

  let temp = [];
  while (n > 0) {
    temp.push(n % 10);
    n = parseInt(n / 10, 10);
  }

  temp.sort((a, b) => b - a);

  var answer = parseInt(temp.join(""), 10);

  return answer;
}
