function solution(triangle) {
  var answer = 0;
  let arr = new Array(triangle.length).fill(0).map((e) => []);

  for (let i = 0; i < triangle.length; i++) {
    for (let j = 0; j < triangle[i].length; j++) {
      if (i == 0) {
        arr[i].push(triangle[i][j]);
      } else if (j == 0) {
        arr[i].push(triangle[i][j] + arr[i - 1][j]);
      } else if (i == j) {
        arr[i].push(triangle[i][j] + arr[i - 1][j - 1]);
      } else {
        let value = Math.max(triangle[i][j] + arr[i - 1][j - 1], triangle[i][j] + arr[i - 1][j]);
        arr[i].push(value);
      }
    }
  }

  answer = Math.max.apply(null, arr[arr.length - 1]);

  return answer;
}
