function solution(s){
    const stack = [];
    // let idx=0;
    // while(idx<s.length){
    //     if(s[idx]==='()') stack.push(s[idx]);
    //     else stack.pop();
    // }
    for(let i =0; i< s.length;i++){
        if(s[i]==='('){
            stack.push(s[i]);
        }else{
            if(stack.length===0) return false;
            const top =  stack[stack.length-1];
            if(top==='(') stack.pop();
            else return false;
        }
    }
    return stack.length===0;
}