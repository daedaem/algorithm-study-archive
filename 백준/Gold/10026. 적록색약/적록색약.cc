#include <iostream>
using namespace std;
//red =0
//blue=1
//green=2
int N;
char pictures[100 + 1][100 + 1];
char Spictures[100 + 1][100 + 1];
int color_cnt[3];
void inputData() 
{
	cin >> N;
	for (int i = 0; i < N; i++) 
	{
		for (int c = 0; c < N; c++)
		{
			cin >> pictures[i][c];
			if (pictures[i][c] == 'G') Spictures[i][c] = 'R';
			else Spictures[i][c] = pictures[i][c];
		}
	}
}
int DFS(int r, int c, char color) 
{
	static int Y[] = { -1,0,1,0 };
	static int X[] = { 0,1,0,-1 };
	
	pictures[r][c] = '.';
	for (int i = 0; i < 4; i++) 
	{
		int dy = r + Y[i];
		int dx = c + X[i];
		if (dy < 0 || dx < 0 || dy >= N || dx >= N) continue;
		if (color != pictures[dy][dx]) continue;
		DFS(dy, dx, pictures[dy][dx]);
	}
	return 1;
}
int SDFS(int r, int c, char color)
{
	static int Y[] = { -1,0,1,0 };
	static int X[] = { 0,1,0,-1 };

	Spictures[r][c] = '.';
	for (int i = 0; i < 4; i++)
	{
		int dy = r + Y[i];
		int dx = c + X[i];
		if (dy < 0 || dx < 0 || dy >= N || dx >= N) continue;
		if (color != Spictures[dy][dx]) continue;
		SDFS(dy, dx, Spictures[dy][dx]);
	}
	return 1;
}
void solve() 
{
	int ans = 0;
	int Sans = 0;
	for (int i = 0; i < N; i++)
	{
		for (int c = 0; c < N; c++)
		{
			if (pictures[i][c] == '.') continue;
			ans += DFS(i, c, pictures[i][c]);
		}
	}
	for (int i = 0; i < N; i++)
	{
		for (int c = 0; c < N; c++)
		{
			if (Spictures[i][c] == '.') continue;
			Sans += SDFS(i, c, Spictures[i][c]);
		}
	}
	
	cout << ans << "\n" << Sans;
}
int main(void) 
{
	inputData();
	solve();
	return 0;
}