function solution(s) {
  var answer = true;
  if (s.length == 4 || s.length == 6) {
    answer = true;
  } else {
    answer = false;
  }
  if (s.match(/[^0-9]/)) {
    answer = false;
  }
  return answer;
}
