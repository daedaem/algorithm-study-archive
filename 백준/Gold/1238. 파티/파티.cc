#include <iostream>
#include <vector>
#include <queue>
#include <algorithm>
using namespace std;
int chk[1000 + 1][1000 + 1];
int N, M, X;
int adjlist[1000 + 1][1000 + 1];
void input() 
{
	cin >> N >> M >> X;
	for (int i = 0; i < M; i++) 
	{
		int s, e, v; cin >> s >> e >> v;
		adjlist[s][e] = v;
	}

}
void ininCheck() 
{
	fill(&chk[0][0], &chk[1000][1000 + 1], 0xf777777);
	for (int i = 1; i <= N; i++)
	{
		for (int j = 1; j <= N; j++) 
		{
			if (i == j) chk[i][j] = 0;
			else if (adjlist[i][j]) chk[i][j] = adjlist[i][j];
		}
	}
}
void froyd() 
{
	for (int i = 1; i <= N; i++) 
	{
		for (int j = 1; j <= N; j++)
		{
			for (int k = 1; k <= N; k++)
			{
				chk[j][k] = min(chk[j][k], chk[j][i] + chk[i][k]);
			}
		}
	}
}
void solve()
{
	int maxx = 0;
	int cnt = 0;
	for (int i = 1; i <= N; i++) 
	{
		cnt = chk[i][X] + chk[X][i];
		if (maxx < cnt) maxx = cnt;
	}
	cout << maxx;
}
int main(void) 
{
	ios_base::sync_with_stdio(false);
	cin.tie(nullptr); cout.tie(nullptr);
	input();
	ininCheck();
	froyd();
	solve();
	return 0;
}