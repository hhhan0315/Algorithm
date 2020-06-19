function solution(n, times) {
  var answer = 0;

  // 가장 시간이 오래걸릴 경우를 두고 이분 탐색한다. (찾아봄)
  let max = Math.max.apply(null, times);
  let high = n * max;
  let low = 1;

  while (low <= high) {
    let mid = Math.floor((low + high) / 2);
    let sum = 0;
    for (let i = 0; i < times.length; i++) {
      sum += Math.floor(mid / times[i]);
    }
    if (sum >= n) {
      if (answer == 0) answer = mid;
      answer = Math.min(answer, mid);
      high = mid - 1;
    } else {
      low = mid + 1;
    }
  }

  return answer;
}

// 1, 60 -> mid = 30
// 30일 경우에는 sum = 7
// 1, 29 -> mid = 15
// 16, 29 -> mid = 22
// 23, 29 -> mid = 26
// 27, 29 -> mid = 28 => answer=28
// 29, 29 -> mid = 29 => 28이 더 작아서 28
