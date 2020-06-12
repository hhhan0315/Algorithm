function solution(str1, str2) {
  var answer = 0;

  let temp1 = [];
  let temp2 = [];
  // let union=new Set();   // 합집합 (set을 쓰면 안된다.)
  // 대소문자 구별 없다 -> 모두 대문자로 만들어줘봤다
  for (let i = 0; i < str1.length - 1; i++) {
    let value = str1.substr(i, 2).toUpperCase();
    if (value.search(/[^A-Z]/g) >= 0) continue; // 구글 참조
    temp1.push(value);
  }
  for (let i = 0; i < str2.length - 1; i++) {
    let value = str2.substr(i, 2).toUpperCase();
    if (value.search(/[^A-Z]/g) >= 0) continue; // 구글 참조
    temp2.push(value);
  }
  temp1.sort();
  temp2.sort();
  console.log(temp1);
  console.log(temp2);

  let inter = []; // 교집합
  let union = []; // 합집합
  for (let i = 0; i < temp2.length; i++) {
    if (temp1.indexOf(temp2[i]) >= 0) {
      inter.push(temp1.splice(temp1.indexOf(temp2[i]), 1));
    }
    union.push(temp2[i]);
  }
  for (let i = 0; i < temp1.length; i++) {
    union.push(temp1[i]);
  }
  console.log(inter);
  console.log(union);

  if (inter.length == 0 && union.length == 0) return 65536;

  answer = Math.floor((inter.length / union.length) * 65536);

  return answer;
}
