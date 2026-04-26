function solution(s) {
    let alph = new Map();
    return [...s].map((el,idx)=>{
        const result = alph[el]==undefined? -1: idx-alph[el];
        alph[el]=idx
        return result;
    })
}