function solution(clothes) {
  var answer = 1;
  let obj = {};

  for (let i = 0; i < clothes.length; i++) {
    obj[clothes[i][1]] = (obj[clothes[i][1]] || 1) + 1; // 없으면 1
  }

  for (let i in obj) {
    answer *= obj[i];
  }

  return answer - 1; // 옷을 아예 입지 않는 경우 제외
}
