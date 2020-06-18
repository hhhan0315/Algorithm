function solution(jobs) {
  var answer = 0;
  let time = 0;
  let start = 0;
  let size = jobs.length;

  let arr = jobs.sort(function (a, b) {
    if (a[1] == b[1]) {
      return a[0] - b[0];
    } else {
      return a[1] - b[1];
    }
  });

  while (arr.length != 0) {
    for (let i = 0; i < arr.length; i++) {
      if (arr[i][0] <= start) {
        start += arr[i][1];
        time += start - arr[i][0];
        arr.splice(i, 1);
        break;
      }
      if (i == arr.length - 1) start++; // 끝까지 돌았는데 start에 안걸리면 start++
    }
  }
  answer = Math.floor(time / size);

  // 구글 참조에서 풀었다. 혼자 생각하기 힘들었음.
  return answer;
}
