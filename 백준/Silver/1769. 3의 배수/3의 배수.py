x = input()
x_str = str(x)

cnt = 0
while len(x_str) > 1:
    newx = 0
    for i in x_str:
        newx += int(i)
        # print(i)
        # print(newx)
    x_str = str(newx)
    cnt += 1

if int(x_str) % 3:
    print(cnt)
    print('NO')
else:
    print(cnt)
    print('YES')