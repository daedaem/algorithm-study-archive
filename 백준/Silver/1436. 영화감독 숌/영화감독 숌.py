N = int(input())
x= 665
count = 0
while x:
    x+=1
    if '666' in str(x):
        count += 1
    if count == N:
        print(x)
        break
        # print('No')