import sys
T = int(sys.stdin.readline())
for i in range(1, T+1):
    A, B = map(int, input().split())
    C= A+B
    print('Case #{}: {} + {} = {} '.format(i, A, B, C))