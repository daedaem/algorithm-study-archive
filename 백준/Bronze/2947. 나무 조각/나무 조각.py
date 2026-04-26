sticks = list(map(int, input().split()))
orders = [1, 2, 3, 4, 5]
# print(sticks)
while sticks != orders:
    for i in range(4):
        if sticks[i] > sticks[i+1]:
            sticks[i], sticks[i + 1] = sticks[i + 1], sticks[i]
            print(*sticks)
        else:
            pass