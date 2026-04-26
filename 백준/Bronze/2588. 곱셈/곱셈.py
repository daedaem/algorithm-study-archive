x=int(input())
y=int(input())
q= x*y
z = 0
result = 0
while y >= 1 :
    z = y % 10
    y = y // 10
    result = x * z
    print(result)
print(q)
# z=5
# y = 38
# result 472*5
# 2360