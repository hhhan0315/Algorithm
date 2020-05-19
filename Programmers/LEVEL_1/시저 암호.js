function solution(s, n) {
  var answer = "";

  let arr = [];
  for (let i in s) {
    let temp = s[i].charCodeAt();
    if (temp == " ") {
      arr.push(32);
      continue;
    }
    // let temp = s[i].charCodeAt()+n;
    if (temp >= 97) {
      if (temp + n > 122) {
        temp = temp + n - 26;
      } else {
        temp += n;
      }
    } else if (temp >= 65) {
      if (temp + n > 90) {
        temp = temp + n - 26;
      } else {
        temp += n;
      }
    }
    arr.push(temp);
  }

  for (let i in arr) {
    answer += String.fromCharCode(arr[i]);
  }
  return answer;
}
