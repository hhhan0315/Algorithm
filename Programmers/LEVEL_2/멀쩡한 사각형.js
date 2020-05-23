function solution(w, h) {
  var answer = 1;
  //     let gcd;

  //     let min = Math.min(w,h);
  //     for(let i=min; i>=0; i--){
  //         if(w%i==0 && h%i==0){
  //             gcd=i;
  //             break;
  //         }
  //     }

  let gcd = (a, b) => {
    return b === 0 ? a : gcd(b, a % b);
  };

  answer = w * h - (w + h - gcd(w, h)); // 공식을 활용한 풀이
  return answer;
}
