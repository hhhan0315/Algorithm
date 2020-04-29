1. 배열의 삭제

```javascript
array.pop(); // 배열의 뒤에서부터 삭제
```

2. 배열의 내장함수

```javascript
array.splice(); // 배열의 요소를 삭제, 교체, 추가하여 변경
array.splice(2, 0, 10000); //(start, deleteCount, item)
//array[2]에서 0개 지우고 10000을 넣는다.
```

3. 변수의 타입

- typeof(arr)로 확인 가능하고 var arr=[100,200]; 인경우에는 object

6. False

- javascript는 NaN, "", 0, undefinde는 false로 취급

9. concat을 활용한 출력 방법

```javascript
var result = year.concat("/", month, "/", day, " ");
```

10. 별 찍기

- 입력 값을 const n = prompt('숫자 입력'); prompt를 활용해 입력 가능하다.

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
