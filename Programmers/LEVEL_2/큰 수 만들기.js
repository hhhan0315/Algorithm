function solution(number, k) {
  var answer = "";

  let stack = [];
  for (let i = 0; i < number.length; i++) {
    let now = number[i];
    while (k > 0 && stack[stack.length - 1] < now) {
      stack.pop();
      k--;
    }
    stack.push(now);
  }

  // 777777 2 이면 지울게 없다
  stack.splice(stack.length - k, k);

  answer = stack.join("");

  return answer;
}
