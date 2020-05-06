function solution(a, b) {
  var answer = "";
  var arr = ["SUN", "MON", "TUE", "WED", "THU", "FRI", "SAT"];
  var date = new Date(`2016-${a}-${b}`);
  var day = date.getDay();
  answer = arr[day];
  return answer;
}
