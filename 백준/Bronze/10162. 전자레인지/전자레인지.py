T = int(input())

a = 60 *5
b = 60
c = 10

result = []
a_number = 0
b_number=0
c_number=0
x = 0
while T:
    a_number = T//a
    b_number = T % a // b
    c_number = ((T % a) % b) // c
    if ((T % a) % b) % c == 0:
        result.append(a_number)
        result.append(b_number)
        result.append(c_number)
        break
    else:
        print(-1)
        break
print(*result)