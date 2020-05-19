function solution(x) {
  var answer = true;

  let hashad = 0;
  let temp = x;
  while (temp > 0) {
    hashad += temp % 10;
    temp = parseInt(temp / 10, 10);
  }

  if (x % hashad != 0) {
    answer = false;
  }

  return answer;
}
