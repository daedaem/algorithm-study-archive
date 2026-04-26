#include <iostream>
#include <queue>
#define MAXD (100000)
using namespace std;
int N, S;
queue<int>Q;
int pos[] = { -1,1 };
int arr[MAXD + 10];
int record[MAXD + 10];
int result = 1;
void input(void)
{
	cin >> N;

	for (int i = 1; i <= N; i++)
	{
		cin >> arr[i];
	}
	cin >> S;
}
void BFS(void)
{
	Q.push(S);
	while (!Q.empty())
	{
		if (result == N) break;
		int start = Q.front(); Q.pop();

		for (int c = 0; c <= 1; c++)
		{
			int nd = start + (arr[start] * (pos[c]));
			if (nd > N || nd < 1) continue;
			if (record[nd]) continue;
			record[nd] = 1;
			result++;
			Q.push(nd);
		}
		record[start] = 1;
	}
	cout << result;
}
int main(void)
{
	input();
	BFS();
	return 0;
}