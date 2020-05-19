function gcd(a, b) {
  while (b > 0) {
    let temp = a;
    a = b;
    b = temp % b;
  }
  return a;
}

function solution(n, m) {
  var answer = [];

  let max = n > m ? n : m;
  let min = n < m ? n : m;

  let temp1 = gcd(max, min);
  answer.push(temp1);
  let temp2 = (n / temp1) * (m / temp1) * temp1;
  answer.push(temp2);

  return answer;
}
