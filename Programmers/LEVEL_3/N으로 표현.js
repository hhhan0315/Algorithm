function solution(N, number) {
  const arr = new Array(9).fill(0).map((e) => new Set());

  for (let i = 1; i < 9; i++) {
    // 5, 55, 555 해주기 위함
    arr[i].add("1".repeat(i) * N);
    for (let j = 1; j < i; j++) {
      for (const arg1 of arr[j]) {
        for (const arg2 of arr[i - j]) {
          arr[i].add(arg1 + arg2);
          arr[i].add(arg1 - arg2);
          arr[i].add(arg1 * arg2);
          arr[i].add(Math.ceil(arg1 / arg2));
        }
      }
    }
    if (arr[i].has(number)) return i;
  }
  return -1;

  /*
    1 일 때 {5}
    2 일 때 {55, 10(5+5), 0(5-5), 25(5*5), 1(5/5)}
    3 일 때 {555, 5와 55 사칙연산, 5와 10 사칙 연산 등등}
    */
}
