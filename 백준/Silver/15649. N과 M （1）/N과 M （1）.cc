#include <iostream>
using namespace std;
int N, M;
int arr[8 + 2];
int visit[8 + 2];
void dfs(int dep) 
{
	if (dep > M) 
	{
		for (int i = 1; i <= M; i++) 
		{
			cout << arr[i] << " ";
		}
		cout << '\n';
		return;
	} 
	for (int i = 1; i <= N; i++) 
	{
		if (visit[i]) continue;
		visit[i] = 1;
		arr[dep] = i;
		dfs(dep + 1);
		visit[i] = 0;
	}
}
int main(void) 
{
	cin >> N >> M;
	dfs(1);
	return 0;
}