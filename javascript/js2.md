<hr>
51. merge sort

```js
function mergeSort(arr) {
  if (arr.length <= 1) {
    return arr;
  }

  const mid = Math.floor(arr.length / 2);
  const left = arr.slice(0, mid);
  const right = arr.slice(mid);

  return merge(mergeSort(left), mergeSort(right));
}

function merge(left, right) {
  let result = [];

  while (left.length && right.length) {
    if (left[0] < right[0]) {
      result.push(left.shift());
    } else {
      result.push(right.shift());
    }
  }
  while (left.length) {
    result.push(left.shift());
  }
  while (right.length) {
    result.push(right.shift());
  }

  return result;
}

const array = prompt("배열을 입력하세요")
  .split(" ")
  .map((n) => parseInt(n, 10));
console.log(mergeSort(array));
/*
array = [5,4,3,2,1];
merge(mergeSort([5,4]), mergeSort([3,2,1]));
merge(([5],[4]),([3],[2],[1]));
result = [1,2,3,4,5];
*/
```

<hr>
52. quick sort

```js
function quickSort(arr) {
  if (arr.length <= 1) {
    return arr;
  }

  const pivot = arr[0];
  const left = [];
  const right = [];

  for (let i = 1; i < arr.length; i++) {
    if (arr[i] < pivot) {
      left.push(arr[i]);
    } else {
      right.push(arr[i]);
    }
  }
  return quickSort(left).concat(pivot, quickSort(right));
  // concat으로 붙이는 것이 신기했다.
}

const array = prompt("배열을 입력하세요")
  .split(" ")
  .map((n) => parseInt(n, 10));
console.log(quickSort(array));
```

<hr>
55. 하노이의 탑

```js
const route = [];

function hanoi(num, start, temp, end) {
  //원판이 한 개일 때에는 바로 옮기면 됩니다.
  if (num === 1) {
    route.push([start, end]);
    return NaN; // Not an number
  }

  // n-1개를 A에서 B
  hanoi(num - 1, start, end, temp);
  // n개를 A에서 C
  route.push([start, end]);
  // n-1개를 B에서 C
  hanoi(num - 1, temp, start, end);
}

hanoi(3, "A", "B", "C");
console.log(route);
console.log(route.length);
```

<hr>
56. 객체의 함수 응용

```js
const nationWidth = {
  korea: 220877,
  Rusia: 17098242,
  China: 9596961,
  France: 543965,
  Japan: 377915,
  England: 242900,
};

const w = nationWidth["korea"];
delete nationWidth["korea"];

const entry = Object.entries(nationWidth); // object key, value를 모두 넣기
const values = Object.values(nationWidth); // object value만 넣기

let gap = Math.max.apply(null, values); // 최대값 구하기
let item = [];

for (let i in entry) {
  if (gap > Math.abs(entry[i][1] - w)) {
    gap = Math.abs(entry[i][1] - w);
    item = entry[i];
  }
  // abs : 절대값
}

console.log(item[0], item[1] - 220877);
```

<hr>
57. 1의 개수

```js
let cnt = 0;

for (let i = 0; i <= 1000; i++) {
  let tmp = i;
  while (tmp > 0) {
    let num = tmp % 10;
    if (num === 1) {
      cnt++;
    }
    tmp = parseInt(tmp / 10, 10);
  }
  // Int형으로 바꿔주는 것이 중요했다.
}

console.log(cnt);
```

<hr>
