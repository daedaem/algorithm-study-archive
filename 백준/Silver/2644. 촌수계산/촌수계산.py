import sys

n = int(input())
a, b = map(int, input().split())
m = int(input())
family = [[] for _ in range(n+1)]
visited = [False] * (n+1)
result = []
res = [0] * (n+1)
for _ in range(n):
    try:
        parent, son = map(int, input().split())
        family[son].append(parent)
        family[parent].append(son)
    except:
        pass
def dfs(start):
    visited[start] = True
    for i in family[start]:
        if not visited[i]:
            res[i] = res[start] + 1
            dfs(i)
dfs(a)
if res[b]>0:
    print(res[b])
else:
    print(-1)