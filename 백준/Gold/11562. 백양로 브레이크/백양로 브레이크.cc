#include <iostream>
#include <vector>
#define MAX_n (250)
#define MAX_K (30000)
#define INF (0x7ffffff)
using namespace std;
int n, m, k;
//int arr[MAX_n + 1][MAX_n + 1];
int chk[MAX_n + 1][MAX_n + 1];
void init() 
{
	for (int i = 1; i <= n; i++) {
		for (int j = 1; j <= n; j++) {
			chk[i][j] = INF;
			chk[j][i] = INF;
		}
	}
}
void input() 
{
	cin >> n >> m;
	init();
	for (int i = 0; i < m; i++) 
	{
		int s, e, b; cin >> s >> e >> b;
		if (!b) {
			chk[s][e] = 0;
			chk[e][s] = 1;
		}
		else {
			chk[s][e] = 0;
			chk[e][s] = 0;
		}
	}
}
void solve()
{
	for (int mid = 1; mid <= n; mid++) {
		for (int s = 1; s <= n; s++) {
			for (int e = 1; e <= n; e++) {
				if (s == e) chk[s][e] = 0;
				if (chk[s][e] > chk[s][mid] + chk[mid][e]) chk[s][e] = chk[s][mid] + chk[mid][e];
			}
		}
	}
	cin >> k;
	for (int j = 0; j < k; j++) 
	{
		int s, e; cin >> s >> e;
		cout << chk[s][e] << '\n';
	}

}
int main(void) 
{
	ios_base::sync_with_stdio(false);
	cin.tie(nullptr); cout.tie(nullptr);
	input();
	solve();
	return 0;
}