function solution(strings, n) {
  var answer = [];

  strings.sort(function (a, b) {
    if (a[n] > b[n]) return 1;
    else if (b[n] > a[n]) return -1;
    else {
      if (a > b) return 1;
      else if (b > a) return -1;
      else return 0;
    }
  });

  answer = strings;

  return answer;
}
