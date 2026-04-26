import sys

numberlist = [1, 5, 10, 50]
# newlist = []
n = int(input())
# print(n)
result = set()

for i in range(n+1):
    for j in range(n-i+1):
        for x in range(n-(i+j)+1):
            for y in range(n-(i+j+x)+1):
                if i+j+x+y != n:
                    pass
                else:
                    result.add(i + 5*j + 10* x + 50*y)
print(len(result))