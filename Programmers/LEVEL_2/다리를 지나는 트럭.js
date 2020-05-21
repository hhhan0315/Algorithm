function solution(bridge_length, weight, truck_weights) {
  var answer = 0;

  let queue = [];
  let total_weight = 0;

  for (let i = 0; i < bridge_length; i++) {
    queue.push(0);
  }

  let now = truck_weights.shift();
  queue.push(now);
  queue.shift();
  total_weight += now;
  answer++;

  while (total_weight) {
    total_weight -= queue.shift();
    now = truck_weights.shift();
    if (now + total_weight <= weight) {
      queue.push(now);
      total_weight += now;
    } else {
      queue.push(0);
      truck_weights.unshift(now); // 다시 꺼낸 값을 넣어주는게 포인트였다.
    }
    answer++;
  }

  return answer;
}
