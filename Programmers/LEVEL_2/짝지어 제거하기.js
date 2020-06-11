function solution(s) {
  var answer = 0;
  //     let flag=0;

  //     let arr = s.split("").slice();
  //     let origin = s.split("").slice();

  //     function remove(arr){
  //         for(let i=0; i<arr.length-1; i++){
  //             if(arr[i] === arr[i+1]){
  //                 arr.splice(i,2);
  //                 flag=1;
  //                 break;
  //             }
  //         }
  //         return arr;
  //     }

  //     while(true){
  //         let temp = remove(arr);
  //         if(flag==0) break;
  //         if(temp.length==0) {
  //             answer=1;
  //             break;
  //         }
  //     }

  let stack = [];
  // for in 사용하니까 실패함
  for (let i = 0; i < s.length; i++) {
    if (stack.length === 0 || stack[stack.length - 1] !== s[i]) {
      stack.push(s[i]);
    } else {
      stack.pop();
    }
  }

  if (stack.length == 0) {
    answer = 1;
  } else {
    answer = 0;
  }

  return answer;
}
