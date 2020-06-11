function solution(s) {
  //     var answer = '';

  //     let str=s.split(" ");
  //     for(let i=0; i<str.length; i++){
  //         for(let j=0; j<str[i].length; j++){
  //             if(j===0){
  //                 answer+=str[i][j].toUpperCase();
  //             }else{
  //                 answer+=str[i][j].toLowerCase();
  //             }
  //         }
  //         if(i== str.length-1) break;
  //         answer+=" ";
  //     }

  //     return answer;
  return s
    .split(" ")
    .map((v) => v.charAt(0).toUpperCase() + v.substring(1).toLowerCase())
    .join(" ");
}
