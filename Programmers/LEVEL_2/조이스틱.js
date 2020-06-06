function solution(name) {
  var answer = 0;

  for (let i = 0; i < name.length; i++) {
    let value = name[i].charCodeAt(0);
    if (value < 78) {
      // A ~ M
      answer += value % 65;
    } else {
      answer += 91 - value;
    }
  }

  // 좌, 우의 최소는 문자열 시작부터 끝까지 가는 경우
  let min = name.length - 1;

  for (let i = 0; i < name.length; i++) {
    let index = i;
    if (name[index] === "A") {
      while (index < name.length && name[index] === "A") {
        index++;
      }
      let moveCount = (i - 1) * 2 + name.length - index;
      min = Math.min(min, moveCount);
    }
  }
  console.log(" 좌,우 이동거리 : " + min);
  return answer + min;
}
