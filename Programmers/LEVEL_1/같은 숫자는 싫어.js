// function solution(arr)
// {
//     return arr.filter(function check(val,index){
//         return val!=arr[index+1];
//     })
// }

function solution(arr) {
  return arr.filter((val, index) => {
    return val != arr[index + 1];
  });
}

// filter(function(currentValue,index,arr), thisValue)로 구성
// 위의  function을 사용하지 않고 =>로도 가능하다.
