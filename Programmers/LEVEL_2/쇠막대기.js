function solution(arrangement) {
  var answer = 0;

  let stack = [];

  for (let i in arrangement) {
    if (arrangement[i] == "(") {
      stack.push(i);
    } else {
      if (arrangement[i - 1] == "(") {
        stack.pop();
        answer += stack.length;
      } else if (arrangement[i - 1] == ")") {
        stack.pop();
        answer += 1;
      }
    }
  }

  return answer;
}
