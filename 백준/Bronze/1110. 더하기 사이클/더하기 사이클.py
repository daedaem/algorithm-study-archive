N = int(input())
cnt = 0
n = N
while N >=0 :
    if n == 0:
        cnt += 1
        break
    elif n !=0:
        pre = n // 10
        post = n % 10
        temp = (pre + post)
        n = 10 * post + temp % 10
        cnt += 1
    if n == N:
        break
print(cnt)