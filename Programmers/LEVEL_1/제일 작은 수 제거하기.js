function solution(arr) {
  var answer = [];

  if (arr.length == 1) {
    answer.push(-1);
  }

  let min = Math.min.apply(null, arr);

  for (let i of arr) {
    if (i == min) continue;
    answer.push(i);
  }
  // splice, indexOf 쓰면 더 간단할듯
  return answer;
}
