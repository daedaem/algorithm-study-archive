import sys
Trees= dict()
cnt =0
while(1):
    N = sys.stdin.readline().strip()
    if not N:
        break;
    else:
        if N in Trees:
            Trees[N] +=1
            cnt += 1
        else:
            Trees[N] = 1
            cnt+=1
for i in Trees:
    Trees[i] = format(Trees[i]*100/cnt, ".4f")
Trees = sorted(Trees.items())
for i in Trees:
    print(*i)