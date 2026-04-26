T = int(input())
for index in range(1, T+1):
    N, M = map(int, input().split())
    # print(N,M)
    numbs = []
    cnt = 0
    x = 0
    for i in range(N, M+1):
        x = str(i)
        for zeros in x:
            if zeros == '0':
                cnt += zeros.count('0')
    print(cnt)