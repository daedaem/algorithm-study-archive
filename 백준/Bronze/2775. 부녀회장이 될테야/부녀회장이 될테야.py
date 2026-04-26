T= int(input())
for tc in range(T):
    K = int(input())
    N = int(input())
    dp = [i for i in range(N+1)]
    for i in range(K):
        for j in range(1, N+1):
            dp[j] += dp[j-1]
    print(dp[-1])