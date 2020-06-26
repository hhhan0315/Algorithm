function solution(n, works) {
  var answer = 0;

  works.sort((a, b) => b - a);

  while (n > 0) {
    let max = Math.max.apply(null, works);
    for (let i = 0; i < works.length; i++) {
      if (works[i] == max && n > 0) {
        works[i]--;
        n--;
      } else {
        break;
      }
    }
  }
  // works.sort((a,b)=>b-a);
  // 정렬을 while문 안에서 계속 해주면 효율성 테스트에서 실패함.

  for (let i = 0; i < works.length; i++) {
    if (works[i] <= 0) continue;
    answer += works[i] * works[i];
  }

  return answer;
}
