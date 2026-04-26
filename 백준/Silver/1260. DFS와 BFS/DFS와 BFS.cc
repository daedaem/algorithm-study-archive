#include <iostream>
#include <vector>
#include <queue>
#include <cstring>
int N, M, V;
std::vector<std::vector<int>> arr(1000+10, std::vector<int>(1000+10));
//std::vector<std::vector<int>> arr(1000+10);
std::vector<int> visit(1000 + 10, 0);
std::queue<int> q;
void input(void) 
{
	std::cin >> N >> M >> V;
	for (int i = 0; i < M; i++) 
	{
		int start, from;
		std::cin >> start >> from;
		arr[start][from] = 1;
		arr[from][start] = 1;
	}
}
void DFS(int start)
{
	if (start == V) 
	{
		visit[start] = 1;
		printf("%d ", V);
	}
	for (int i = 1; i <= N; i++)
	{
		if (!(visit[i]) && arr[start][i] == 1)
		{
			int now = i;
			visit[now] = 1;
			printf("%d ", now);
			DFS(now);
		}
	}
}
void init(void) 
{
	for (int i = 1; i <= N; i++) 
	{
		visit[i] = 0;
	}
}
void BFS(int start) 
{
	visit[start] = 1;
	printf("%d ", start);
	q.push(start);
	while (!(q.empty())) 
	{
		int now = q.front();
		q.pop();
		for (int i = 1; i <= N; i++) 
		{
			if (arr[now][i] == 1 && !(visit[i])) 
			{
				printf("%d ", i);
				visit[i]=1;
				q.push(i);
			}
		}
		
	}
}
void solve(void) 
{
	DFS(V);
	printf("\n");
	init();
	BFS(V);
}
int main()
{
	input();
	solve();
}