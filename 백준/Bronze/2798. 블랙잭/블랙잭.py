N, M = map(int, input().split())
# print(N,M)
cards=list(map(int,input().split()))
# print(cards)
sums = []
for i in range(N-2):
    for j in range(i+1, N-1):
        for z in range(j+1, N):
            # print(cards[i], cards[j], cards[z])
            if cards[i]+cards[j]+cards[z]<= M:
                sums.append(cards[i]+cards[j]+cards[z])
print(max(sums))