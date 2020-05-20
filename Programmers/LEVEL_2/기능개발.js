function solution(progresses, speeds) {
  var answer = [];

  let max = 0;
  let temp = [];
  for (let i = 0; i < progresses.length; i++) {
    let quo = Math.ceil((100 - progresses[i]) / speeds[i]);

    if (max < quo) {
      answer.push(1);
      max = quo;
    } else {
      let temp = answer.pop();
      answer.push(temp + 1);
    }
  }

  return answer;
}
