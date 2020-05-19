function solution(phone_number) {
  var answer = "";

  let last4 = phone_number.slice(-4);

  console.log(last4);
  answer = last4.padStart(phone_number.length, "*");

  return answer;
}
