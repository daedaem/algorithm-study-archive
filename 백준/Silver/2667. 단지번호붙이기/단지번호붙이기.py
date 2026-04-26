import sys
sys.setrecursionlimit(99999)
# 최단거리도 아니고 쭉 가도 되니까 dfs

def dfs(y, x, cnt):
    visited[y][x] = cnt
    for i in range(4):
        dy = y + Y[i]
        dx = x + X[i]
        if dy < 0 or dx < 0 or dy > N-1 or dx > N-1 or towns[dy][dx] == 0:
            pass
        else:
            towns[dy][dx] = 0
            visited[dy][dx] = cnt
            dfs(dy, dx, cnt)

N = int(input())
towns = [list(map(int, input())) for _ in range(N)]
# print(towns)
Y = [-1, 1, 0, 0]
X = [0, 0, -1, 1]
visited = [[0] * N for _ in range(N)]
# print(visited)
cnt = 0
for i in range(N):
    for j in range(N):
        if towns[i][j] == 1:
            cnt+=1
            dfs(i, j, cnt)
# print(towns)
# print(visited)
temp = []
result = []
for i in range(N):
    for j in range(N):
        temp.append(visited[i][j])
# print(temp)
# print(set(temp))
if len(set(temp)) == 1 and 0 in temp:
    print(cnt)
    print(0)
else:
    for i in (set(temp)):
        if i != 0:
            result.append(temp.count(i))
            # print(result)
    results = sorted(result)
    print(cnt)
    for i in results:
        print(i)


