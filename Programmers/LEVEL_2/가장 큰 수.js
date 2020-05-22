function solution(numbers) {
  var answer = "";

  numbers.sort(function (a, b) {
    // console.log(`${a},${b} : ${b}${a} - ${a}${b}`);
    return `${b}${a}` - `${a}${b}`;
  });

  answer = numbers.join("");
  answer = answer[0] === "0" ? "0" : answer;
  return answer;
}

/*
6,10 : 106 - 610
10,2 : 210 - 102
6,2 : 26 - 62

6,10 비교했을 때 610이 더 좋기 때문에 6이 먼저 나오도록 음수 처리
10, 2 비교하면 210이 더 좋기 때문에 10이 2보다 늦게 나오도록
6, 2 비교하면 62가 더 좋기 때문에 6이 먼저 나오도록

==> 6210

*/
