N = int(input())
numblist= [int(input()) for _ in range(N)]
# print(numlist)

for i in range(N-1):#0~3
    for j in range(N-i-1): # 4
        if numblist[j] > numblist[j+1]:
            numblist[j], numblist[j+1] = numblist[j+1], numblist[j]

for i in range(len(numblist)):
    print(numblist[i])