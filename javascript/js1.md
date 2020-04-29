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
