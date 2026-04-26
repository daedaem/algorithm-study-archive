#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
typedef long long ll;
int M, N;
ll L;
pair<int, int> ani[100000 + 10];
int sd[100000 + 10];
int visited[100000 + 10];
//visit으로 처리할까
void input(void)
{
	cin >> M >> N >> L;
	for (int i = 0; i < M; i++) 
	{
		cin >> sd[i];
	}
	for (int i = 0; i < N; i++) 
	{
		cin >> ani[i].first >> ani[i].second;
	}
}
void solve(void) 
{
	//sort(ani, ani + N);
	sort(sd, sd + M);
	int cnt = 0;
	int minn = N;
	for (int i = 0; i < M; i++) 
	{
		for (int j = 0; j < minn; j++) 
		{
			if ((abs(ani[j].first - sd[i]) + ani[j].second) <= L) 
			{				
				if (!(visited[j])) 
				{
					visited[j] = 1;
					cnt++;
				}
			}
		}
	}
	cout << cnt;
}
int main(void)
{
	input();
	solve();
	return 0;
}