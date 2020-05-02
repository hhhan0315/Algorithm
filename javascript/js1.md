1. 배열의 삭제

```javascript
array.pop(); // 배열의 뒤에서부터 삭제
```

<hr>
2. 배열의 내장함수

```javascript
array.splice(); // 배열의 요소를 삭제, 교체, 추가하여 변경
array.splice(2, 0, 10000); //(start, deleteCount, item)
//array[2]에서 0개 지우고 10000을 넣는다.
```

<hr>
3. 변수의 타입

- typeof(arr)로 확인 가능하고 var arr=[100,200]; 인경우에는 object
<hr>

6. False

- javascript는 NaN, "", 0, undefinde는 false로 취급
<hr>

9. concat을 활용한 출력 방법

```javascript
var result = year.concat("/", month, "/", day, " ");
```

<hr>
10. 별 찍기

- 입력 값을 const n = prompt('숫자 입력'); prompt를 활용해 입력 가능하다.
<hr>

12. 클래스 만들기

```javascript
const Wizard = class Wizard {
  constructor(health, mana, armor) {
    this.health = health;
    this.mana = mana;
    this.armor = armor;
  }
  attack() {
    console.log("파이어볼");
  }
};
// 같이 클래스 선언이 가능하다.
```

<hr>
16. 로꾸거

```javascript
const reverseString = n.split("").reverse().join("");
// split() : 문자열 -> 배열
// reverse() : 배열을 reverse
// join() : 배열 -> 문자열
```

<hr>
18. 평균 점수

```javascript
const scores = prompt("세 과목의 점수 입력").split(" "); // 공백으로 구분
let sum = 0;
for (let i = 0; i < 3; i++) {
  sum += parseInt(scores[i], 10); // parseInt(string, radix); 10진수로 변경
}

console.log(Math.floor(sum / 3));
// Math.floor 는 소수점을 모두 버린다.
```

<hr>
19. 제곱을 구하자

- Math.pow(base, exponent)
<hr>

24. 대문자로 바꿔주세요

- string.toUpperCase()
<hr>

30. 문자열 속 문자 찾기

- string.indxOf()
- data.indexOf(word) : data 중에 word의 첫번째 index의 위치를 반환, 없으면 -1 반환
<hr>

34. 오름차순

```javascript
// 오름차순 (숫자 비교)
array.sort(function(a,b)){
    return a-b;
}
// 내림차순
array.sort(function(a,b)){
    return b-a;
}
```

<hr>
35. factory 함수

```javascript
function one(n) {
  function two(value) {
    const sq = Math.pow(value, n);
    return sq;
  }
  return two;
}

const a = one(2);
const b = one(3);
const c = one(4);

console.log(a(10)); //100
console.log(b(10)); //1000
console.log(c(10)); //10000
// factory 는 객체를 return하기 때문에 sq에 직접적으로 접근을 할 수 없다.
```

<hr>
37. 반장 선거

```javascript
const array = prompt("이름을 입력해주세요.").split(" "); // 이름을 공백으로 구분해서 저장
let result = {}; // object
let winner = "";

for (let index in array) {
  let val = array[index];
  result[val] = result[val] === undefined ? 1 : (result[val] = result[val] + 1);
}
// result[원범]=1; 이렇게 저장함

winner = Object.keys(result).reduce(function (pre, value) {
  return result[pre] > result[value] ? pre : value;
});
// reduce 사용, result object 중 가장 큰 값이 남는다.
// Objects.keys() object의 key값들을 배열로 return

console.log(`${winner}(이)가 총 ${result[winner]}표로 반장이 되었습니다.`);
```

<hr>
38. 호준이의 아르바이트

```js
const scores = prompt("점수입력")
  .split(" ")
  .map(function (n) {
    return parseInt(n, 10);
  });
// map : 배열내의 모든 요소 각각에 대하여 주어진 함수를 호출한 결과를 모아 새로운  배열 반환

scores.sort(function (a, b) {
  return a - b;
});

// scores.sort((a, b) => {
//   return a-b;
// });
// 오름차순 정렬

let count = 0;
let arr = [];

while (arr.length < 3) {
  let n = scores.pop();
  if (!arr.includes(n)) {
    arr.push(n);
  }
  count += 1;
}

console.log(scores);
```

<hr>
39. 오타 수정하기

```js
//1. 함수 사용
const word = prompt("입력하세요.");

function replaceAll(str, searchStr, replaceStr) {
  return str.split(searchStr).join(replaceStr);
}
// q에서 자르고 그곳에 e를 붙인다.

console.log(replaceAll(word, "q", "e"));

//2. 정규식 사용
const word = prompt("입력하세요.");

console.log(word.replace(/q/gi, "e"));
// g : global (전체), i : 대소문자 무시 (ignore)
```

<hr>
42. 2020년

```js
function solution(a, b) {
  const day = ["SUN", "MON", "TUE", "WED", "THU", "FRI", "SAT"];
  const x = new Date("2020-" + a + "-" + b);
  console.log(x); // Sun May 24 2020 00:00:00 GMT+0900 (대한민국 표준시)
  console.log(x.getDay()); // 0
  return day[x.getDay()]; // SUN
}

console.log(solution(5, 24));
// 날짜와 시간은 현재 자바스크립트 코드가 동작하는 시스템에 따라 달라진다.
```

<hr>
45. getTime() 함수 사용하기

```js
let date = new Date().getTime(); // 1970/1/1 00:00:00 기준 ms
date = date / 1000; // ms * 1000 = 1s
date = date / 60; // 1s * 60 = 1minute
date = date / 60; // 1m * 60 = 1hour
date = date / 24; // 1h * 24 = 1day
date = date / 365; // 1d * 365 = 1year
date = date + 1970; // 해당 year + 기준 1970 = 2020 (현재 연도)
date = Math.floor(date);

console.log(date);
// 시간 카운터 프로그램 만들 때 유용하게 사용
```

<hr>
47. set 자료형의 응용

```js
// set은 중복되는 값을 가지지 않는 값들의 리스트
let result = new Set();
for (let val in people) {
  result.add(people[val]);
}
```

<hr>
50. 버블 정렬 구현하기

```js
function bubble(arr) {
  let result = arr.slice();

  for (let i = 0; i < result.length - 1; i++) {
    for (let j = 0; j < result.length - i; j++) {
      if (result[j] > result[j + 1]) {
        let temp = result[j];
        result[j] = result[j + 1];
        result[j + 1] = temp;
      }
    }
  }
  return result;
}

const items = prompt("입력해주세요.")
  .split(" ")
  .map((n) => {
    return parseInt(n, 10);
  });

console.log(bubble(items));
```
