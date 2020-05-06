function solution(answers) {
  var answer = [];
  const p1 = [1, 2, 3, 4, 5];
  const p2 = [2, 1, 2, 3, 2, 4, 2, 5];
  const p3 = [3, 3, 1, 1, 2, 2, 4, 4, 5, 5];
  let cnt = [0, 0, 0];

  for (var i = 0; i < answers.length; i++) {
    var num = answers[i];
    if (p1[i % p1.length] == num) cnt[0]++;
    if (p2[i % p2.length] == num) cnt[1]++;
    if (p3[i % p3.length] == num) cnt[2]++;
  }

  const max = Math.max(cnt[0], cnt[1], cnt[2]);

  for (var i = 0; i < cnt.length; i++) {
    if (cnt[i] == max) answer.push(i + 1);
  }

  return answer;
}
