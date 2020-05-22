function isPrime(num) {
  if (num < 2) return false;
  if (num == 2) return true;
  for (let i = 2; i <= Math.sqrt(num); i++) {
    if (num % i == 0) return false;
  }
  return true;
}

function solution(numbers) {
  var answer = 0;

  let set = new Set();
  let nums = numbers.split("");

  function permutation(a, s) {
    if (s.length > 0) {
      if (set.has(Number(s)) == false) {
        set.add(Number(s));
        if (isPrime(Number(s))) {
          answer++;
        }
      }
    }

    if (a.length > 0) {
      for (let i = 0; i < a.length; i++) {
        let temp = a.slice(0);
        temp.splice(i, 1);
        permutation(temp, s + a[i]);
      }
    }
  }

  permutation(nums, "");

  return answer;
}
