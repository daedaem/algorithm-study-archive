A = int(input())
B = int(input())
C = int(input())

result = A*B*C
real=[]
z= str(result).split()
for w in z:
    real += w
    # print(real)
    for i in range(10):
        q= str(i)
        y = real.count(q)
        print(y)