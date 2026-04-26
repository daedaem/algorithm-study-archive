import sys

N = int(input())
for index in range(1, N+1):
    stack = input().split()
    if len(stack) == 1:
        print('Case #{}:'.format(index), *stack)
    elif len(stack) > 1:
        print('Case #{}:'.format(index), end=' ')
        for i in range(len(stack)-1, -1, -1):
            print(stack[i], end=' ')
        print()

