function solution(t, p) {
    let answer = 0;
    // console.log(t, p)
    for(let i=0; i<t.length-p.length+1;i++){
        let word = "";
        for(let k=0; k<p.length;k++){
            word+= t[i+k];
        }
        if (Number(word)<=p) answer+=1;
    }
    return answer;
}