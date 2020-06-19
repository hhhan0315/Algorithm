function solution(tickets) {
  var answer = [];

  // 1번 2번 시간 초과
  // 알파벳 순서로 정렬
  //     tickets.sort();
  //     console.log(tickets);
  //     let start="ICN";

  //     while(tickets.length!=0){
  //         for(let i=0; i<tickets.length; i++){
  //             if(tickets[i][0]==start){
  //                 answer.push(start);
  //                 start=tickets[i][1];
  //                 tickets.splice(i,1);
  //                 break;
  //             }
  //         }
  //     }
  //     answer.push(start);

  // 그 경로로 모든 경로를 다 방문할 수 있는지 확인이 필요하다.
  let visited = new Array(tickets.length + 1).fill(false);
  tickets.sort(); // 알파벳 정렬
  dfs("ICN", tickets, visited, answer, 0);

  function dfs(from, tickets, visited, answer, cnt) {
    answer.push(from);

    if (cnt == tickets.length) {
      // 모든 티켓을 다 돌았을 경우에 return
      return true;
    }

    for (let i = 0; i < tickets.length; i++) {
      if (tickets[i][0] == from && !visited[i]) {
        visited[i] = true;
        let success = dfs(tickets[i][1], tickets, visited, answer, cnt + 1);
        if (success) return true; // 경로 찾기에 성공하면 더 이상 찾지 않고 빠져나오기
        visited[i] = false;
      }
    }

    answer.pop();
    return false;
  }

  return answer;
}
