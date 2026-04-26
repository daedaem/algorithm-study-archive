import sys

N, M = map(int, input().split())
arr = list(map(int,input().split()))
# print(arr)
start = 0
end = 0
count = 0
# while arr:
while arr:
    temp = 0
    for i in range(start, end+1):
        temp += arr[i]
    if temp < M:
        end+=1
    elif temp==M:
        start+=1
        count+=1
    elif temp > M:
        start+=1
    if end  >= N or start >= N:
        break
print(count)

#     for j in range(end+1):
#         temp += arr[j]
#         if temp >= M:
#             count+=1
#             end


