function solution(budgets, M) {
  var answer = 0;

  // low를 배열의 가장 작은 값으로 해서 테스트 9번에서 실패
  // let low = Math.min.apply(null,budgets);
  let low = 0;
  let high = Math.max.apply(null, budgets);

  let temp = [];

  while (low <= high) {
    let mid = Math.floor((low + high) / 2);
    let sum = 0;
    for (let i = 0; i < budgets.length; i++) {
      // for in 써서 효율성 2번 실패
      if (budgets[i] <= mid) {
        sum += budgets[i];
      } else {
        sum += mid;
      }
    }
    if (M > sum) {
      low = mid + 1;
      temp.push(mid);
    } else {
      high = mid - 1;
    }
  }

  answer = Math.max.apply(null, temp);
  return answer;
}
