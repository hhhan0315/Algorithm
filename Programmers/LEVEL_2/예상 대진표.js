function solution(n, a, b) {
  var answer = 0;

  // 시간초과 코드
  //     while(true){

  //         if(a%2!=0 && a+1==b) break;
  //         if(a%2==0){
  //             a/=2;
  //         }else{
  //             a=(a+1)/2;
  //         }
  //         if(b%2==0){
  //             b/=2;
  //         }else{
  //             b=(b+1)/2;
  //         }
  //         answer++;
  //     }

  while (a != b) {
    a = a % 2 == 0 ? a / 2 : (a + 1) / 2;
    b = b % 2 == 0 ? b / 2 : (b + 1) / 2;
    answer++;
  }

  return answer;
}
