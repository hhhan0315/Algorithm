function solution(genres, plays) {
  // var answer = [];

  // 배열.map((요소, 인덱스, 배열) => {return 요소})
  // 배열.reduce((누적값, 현재값, 인덱스, 요소) => {return 결과}, 초기값)
  // 초기값을 적어주지 않으면 0번째 인덱스의 값이 된다.
  // 찾아보고 해결함

  const arr = genres.reduce((acc, cur, index) => {
    // console.log(acc,cur,index);
    if (!acc[cur]) {
      // 이 부분이 좀 신기했다.
      acc[cur] = {
        total: 0,
        list: [],
      };
    }

    acc[cur].total += plays[index];
    acc[cur].list.push([index, plays[index]]);

    return acc;
  }, {});

  console.log(arr);

  let summary = Object.values(arr).sort((a, b) => b.total - a.total);

  const answer = summary.reduce((acc, cur) => {
    cur.list.sort((a, b) => b[1] - a[1]);
    acc.push(cur.list[0][0]);
    if (cur.list.length > 1) {
      acc.push(cur.list[1][0]);
    }
    return acc;
  }, []);

  return answer;
}
