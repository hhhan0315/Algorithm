function solution(begin, target, words) {
  var answer = 0;

  let visited = new Array(words.length).fill(0);
  let start = begin;
  let arr = [];
  dfs(start);

  // 탐색을 시작해서 target을 만나면 arr 배열에 저장해준다.
  // 그 중에서 가장 작은 값에서 1을 더해준다.
  function dfs(start) {
    console.log(start);

    for (let i = 0; i < words.length; i++) {
      let count = 0;
      let temp = words[i].split("");
      for (let j = 0; j < temp.length; j++) {
        if (start[j] != temp[j]) {
          count++;
        }
      }
      if (count == 1 && visited[i] == 0) {
        if (words[i] == target) {
          arr.push(answer);
        }
        answer++;
        visited[i] = 1;
        dfs(words[i]);
        visited[i] = 0;
        answer--;
      }
    }
  }
  answer = arr.length == 0 ? 0 : Math.min.apply(null, arr) + 1;
  return answer;
}
