height_list = [int(input()) for _ in range(9)]
# print(height_list)
sum_left = sum(height_list)-100
for i in range(8):
    for j in range(i+1, 9):
        if height_list[i] + height_list[j] == sum_left:
            x = height_list[i]
            y = height_list[j]
height_list.remove(x)
height_list.remove(y)
height_list.sort()
for i in height_list:
    print(i)
