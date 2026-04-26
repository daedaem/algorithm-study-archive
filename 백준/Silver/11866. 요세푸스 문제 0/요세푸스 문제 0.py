n, k = map(int, input().split())
# print(n, k)
stack=[]
arrs = list(range(1, n+1))
k = k-1
indexs = k
# print(arrs)
while len(arrs) != 0:
    if len(arrs) <= k:
        k = k % len(arrs)
        y = arrs.pop(k)
        stack.append(y)
        k += indexs
    if len(arrs) > k:
        y = arrs.pop(k)
        stack.append(y)
        k += indexs
result = []
for i in stack:
    if len(stack)>1:
        if i == stack[0]:
            y = '<' + str(i)+','
        elif i == stack[-1]:
            y = str(i) + '>'
        else:
            y = str(i)+','
        result.append(y)
    else:
        print('<{}>'.format(*stack))
print(*result)
