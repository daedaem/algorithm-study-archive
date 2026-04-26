def solution(n):
    idx=1
    while idx<=n:
        if(idx %3 ==0 or '3' in str(idx)):
            n+=1
        idx+=1
    return n