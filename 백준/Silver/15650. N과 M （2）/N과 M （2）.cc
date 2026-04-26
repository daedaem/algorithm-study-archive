#include <iostream>
using namespace std;
int N, M;
int arr[8 + 2];
void dfs(int dep, int idx)
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
	for (int i = idx; i <= N; i++)
	{
		arr[dep] = i;
		dfs(dep + 1, i+1);
	}
}
int main(void)
{
	cin >> N >> M;
	dfs(1, 1);
	return 0;
}