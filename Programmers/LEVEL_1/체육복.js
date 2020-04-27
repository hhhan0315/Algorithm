function solution(n, lost, reserve) {
    var answer = 0;
    let arr=[];
    for(let i=0; i<n; i++){
        arr.push(1);
    }
    
    for(let i=0; i<lost.length; i++){
        arr[lost[i]-1]--;
    }
    
    for(let i=0; i<reserve.length; i++){
        arr[reserve[i]-1]++;
    }
    
    for(let i=0; i<n; i++){
        if(arr[i]==0){
            if(arr[i+1]==2){
                arr[i]++;
                arr[i+1]--;
            }else if(arr[i-1]==2){
                arr[i]++;
                arr[i-1]--;
            }
        }
    }
    
    for(let i=0; i<n; i++){
        if(arr[i]!=0) answer++;
    }
    
    return answer;
}