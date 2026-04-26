N = list(map(int, input().split()))
sums = 0
for num in N:
    sums+=(num**2)
print(sums%10)