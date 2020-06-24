function solution(s) {
  var answer = 0;

  for (let i = 0; i < s.length; i++) {
    // j > answer 이미 앞에서 answer 나왔으면 끝
    // 생각하기 너무 힘들어서 찾아보고 해결
    for (let j = s.length; j > answer; j--) {
      let left = i;
      let right = left + j - 1;
      while (left < right && s[left] == s[right]) {
        left++;
        right--;
      }
      if (left >= right && answer < j) {
        answer = j;
        break;
      }
    }
  }

  return answer;
}
