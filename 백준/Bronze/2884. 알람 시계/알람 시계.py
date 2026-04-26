H, M = input().split(' ')
x=int(H)
y=int(M)
if y-45 < 0:
    x -= 1
    y += 60
    if x <0:
        x +=24         
print(x, y-45)