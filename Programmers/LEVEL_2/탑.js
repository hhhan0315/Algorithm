function solution(heights) {
  var answer = [];

  for (let i = heights.length - 1; i >= 0; i--) {
    let empty = true;

    for (let j = i - 1; j >= 0; j--) {
      if (heights[j] > heights[i]) {
        answer.push(j + 1);
        empty = false;
        break;
      }
    }
    if (empty) answer.push(0);
  }

  answer.reverse();
  return answer;
}

// function solution(heights) {
//     return heights.map((v, i) => {
//         while (i) {
//             i--;
//             if (heights[i] > v) {
//                 return i + 1;
//             }
//         }
//         return 0;
//     });
// }
