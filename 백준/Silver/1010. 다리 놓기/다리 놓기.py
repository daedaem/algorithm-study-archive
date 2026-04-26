T = int(input())
for tc in range(1,T+1):
    N, M = map(int, input().split())
    arr = [[0 for _ in range(M+1)] for _ in range(N+1)]
    for i in range(M+1):
        arr[1][i] = i
    for r in range(1, N+1):
        for c in range(1, M+1):
            for j in range(1, c):
                arr[r][c] += arr[r-1][j]
    print(arr[N][M])