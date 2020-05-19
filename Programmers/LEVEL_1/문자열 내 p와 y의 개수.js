function solution(s) {
  var answer = true;

  let count1 = 0;
  let count2 = 0;

  for (let i of s) {
    if (i == "p" || i == "P") count1++;
    if (i == "y" || i == "Y") count2++;
  }

  if (count1 != count2) answer = false;

  return answer;
}
