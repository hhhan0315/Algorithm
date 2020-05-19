function solution(priorities, location) {
  var answer = 0;

  // map(요소, 인덱스, 배열)
  let arr = priorities.map((priority, index) => {
    return { priority: priority, index: index };
  });

  let queue = [];
  while (arr.length > 0) {
    let temp = arr.shift();
    let check = arr.some((e) => e.priority > temp.priority); // 각 요소가 모두 통과하면 true
    if (check) {
      arr.push(temp);
    } else {
      // false면 가장 크다는 뜻이니까 queue에 넣자.
      queue.push(temp);
    }
  }
  answer = queue.findIndex((q) => q.index == location) + 1;

  return answer;
}
