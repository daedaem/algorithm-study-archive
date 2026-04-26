total = list(map(int, input().split()))
# print(total)
N=int(input())
squares_info = [list(map(int, input().split())) for _ in range(N)]
# print(squares_info)
list = []
x =[0, total[0]]#10
y =[0, total[1]]#8
for i in range(len(squares_info)):
    if squares_info[i][0] == 1:
        x.append(squares_info[i][1])
    elif squares_info[i][0] == 0:
        y.append(squares_info[i][1])
x.sort()
y.sort()
xlist=[]
ylist=[]
for i in range(len(x)-1):
    xlist.append(abs(x[i] -x[i+1]))
for i in range(len(y) - 1):
    ylist.append(abs(y[i] - y[i + 1]))
# print(xlist)
# print(ylist)
maxsquare = 0
for i in range(len(xlist)):
    for j in range(len(ylist)):
       if xlist[i]*ylist[j]> maxsquare:
           maxsquare =xlist[i]*ylist[j]
print(maxsquare)