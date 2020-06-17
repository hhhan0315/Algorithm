function solution(routes) {
  var answer = 1;

  let arr = routes.sort((a, b) => a[0] - b[0]);
  // console.log(arr);
  let temp = arr[0][1];

  for (let i = 1; i < arr.length; i++) {
    if (arr[i][1] < temp) {
      temp = arr[i][1];
    }
    if (arr[i][0] > temp) {
      answer++;
      temp = arr[i][1];
    }
  }
  // 카메라 위치 : 15 -> -13 < 15 -> 카메라 -13으로 이동
  // -13 < -5 -> 카메라 -5 추가 설치 후 이동
  // 찾아보고 해결함

  return answer;
}
