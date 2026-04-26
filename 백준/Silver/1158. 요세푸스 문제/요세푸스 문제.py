import sys

N, K = map(int, input().split())
orders = 0
stack = []
members = list(range(1,N+1))
while members:
    orders += K-1
    if orders >= len(members):
        while orders >= len(members):
            orders -=len(members)
        x = members.pop(orders)
        stack.append(x)
    else:
        x = members.pop(orders)
        stack.append(x)

print('<', end="")
for i in range(len(stack)-1):
    print(stack[i], end=", ")
print(stack[-1], end=">")