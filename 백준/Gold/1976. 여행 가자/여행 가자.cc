#include <iostream>
#include <vector>
#include <cstring>
#include <algorithm>
#define MAX_N (200)
using namespace std;
vector<int> adjlist[MAX_N];
vector<int> routes;
int visit[MAX_N + 2];
int N,M;

void input() {
	cin >> N >> M;
	for (int node = 1; node <= N; node++) {
		for (int nnode = 1; nnode <= N; nnode++) {
			int aa; cin >> aa;
			if (aa) {
				adjlist[node].push_back(nnode);
			}
		}
	}
	routes.resize(M + 1);
	for (int i = 0; i < M; i++) {
		cin >> routes[i];
	}
	memset(visit, 0, sizeof(visit));
}
void DFS(int node) {
	visit[node] = 1;
	for (int n = 0; n < adjlist[node].size(); n++) {
		int nextnode = adjlist[node][n];
		if (visit[nextnode]) continue;
		DFS(nextnode);
	}
}
int solve() {
	DFS(routes[0]);
	for (int i = 0; i < M; i++) {
		if (!visit[routes[i]]) return 0;
	}
	return 1;
}
int main(void) {
	ios_base::sync_with_stdio(false);
	cin.tie(nullptr);

	input();
	int ret = solve();
	if (ret) cout << "YES" << "\n";
	else cout << "NO" << "\n";

	return 0;
}