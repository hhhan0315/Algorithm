function solution(people, limit) {
  var answer = 0;
  people.sort((a, b) => a - b);

  // 50,50,70,80 에서 50, 80 비교-> 50,70 -> 50,50
  let j = 0,
    i;
  for (i = people.length - 1; i > j; i--) {
    if (people[i] + people[j] > limit) {
      answer++;
    } else {
      j++;
      answer++;
    }
  }
  if (i == j) answer++;

  return answer;
}
