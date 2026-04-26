N, K = list(map(int, input().split()))
templist = list(map(int, input().split()))
templist_sum = 0
temp = []
# 일단 첫번째 k까지 합 구하고
for i in range(K):
    temp += [templist[i]]
templist_sum += sum(temp)
# print(templist_sum)
# 이제부터 맨앞 숫자 빼고(이전숫자)
for i in range(K, N):
    temp.remove(templist[i-K])
    temp += [templist[i]]
    if sum(temp) > templist_sum:
        templist_sum = sum(temp)
print(templist_sum)