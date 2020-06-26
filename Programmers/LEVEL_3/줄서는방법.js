function solution(n, k) {
  var answer = [];
  let arr = [];
  for (let i = 1; i <= n; i++) {
    arr.push(i);
  }

  let memoryFactorial = [1, 1];
  function factorial(n) {
    if (memoryFactorial[n] == undefined) {
      memoryFactorial[n] = n * factorial(n - 1);
    }
    return memoryFactorial[n];
  }

  k--; // index는 0부터 시작
  while (arr.length > 0) {
    let index = Math.floor(k / factorial(n - 1));
    k %= factorial(n - 1);
    n--;
    answer.push(arr[index]);
    arr.splice(index, 1);
  }
  /*
    k = 4, index = 2 , [3]
    k = 0, index = 0 , [3,1]
    k = 0, index = 0 , [3,1,2]
    순열로 구하면 20!가 효율성 테스트에서 통과 실패
    찾아보고 해결
    */

  return answer;
}
