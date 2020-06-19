function solution(operations) {
  var answer = [];

  let arr = [];
  for (let i = 0; i < operations.length; i++) {
    let temp = operations[i].split(" ");
    if (temp[0] == "I") {
      arr.push(temp[1]);
    } else if (temp[0] == "D") {
      if (temp[1] == "1") {
        let max = Math.max.apply(null, arr);
        let index = arr.indexOf(String(max));
        arr.splice(index, 1);
      } else if (temp[1] == "-1") {
        let min = Math.min.apply(null, arr);
        let index = arr.indexOf(String(min));
        arr.splice(index, 1);
      }
    }
  }

  arr.sort((a, b) => a - b);
  console.log(arr);
  if (arr.length == 0) {
    answer.push(0, 0);
  } else {
    answer.push(parseInt(arr[arr.length - 1], 10), parseInt(arr[0], 10));
  }

  return answer;
}
