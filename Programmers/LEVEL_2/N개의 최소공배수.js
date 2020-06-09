function solution(arr) {
  var answer = 0;
  let length = arr.length;

  function gcd(a, b) {
    while (b != 0) {
      let temp = a % b;
      a = b;
      b = temp;
    }
    return a;
  }

  function lcm(a, b) {
    return (a * b) / gcd(a, b);
  }

  if (length === 1) {
    answer = arr[0];
  } else if (length === 2) {
    answer = lcm(arr[0], arr[1]);
  } else {
    let temp = lcm(arr[0], arr[1]);
    for (let i = 2; i < length; i++) {
      temp = lcm(temp, arr[i]);
    }
    answer = temp;
  }

  return answer;
}
