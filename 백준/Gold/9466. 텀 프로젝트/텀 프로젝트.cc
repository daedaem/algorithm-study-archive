#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

#define MAX_N (100000)
int T, N;
int visit[MAX_N + 2];
int finished[MAX_N + 2];
int adj[MAX_N+2];
int gcnt;
void input() {
	cin >> N;
	fill(&adj[1], &adj[MAX_N+1], 0);

	for (int i = 1; i <= N; i++) {
		cin >> adj[i];
	}
}

void DFS(int node) {
	visit[node] = 1;
	int next = adj[node];
	if (!visit[next]) {
		DFS(next);
	}
	else {
		if (!finished[next]) {
			gcnt++;
			for (int i = next; i != node; i = adj[i]) {
				if(!finished[i]) finished[i]= 1;
				gcnt++;
			}
		}
	}
	finished[node] = 1;
}
void solve() {
	fill(&finished[1], &finished[MAX_N+1], 0);
	fill(&visit[1], &visit[MAX_N+1], 0);
	gcnt = 0;
	for (int i = 1; i <= N; i++) {
		if (visit[i]) continue;
		if (visit[adj[i]]) continue;
		DFS(i);
	}
	cout << N-gcnt << '\n';
}
int main(void) {
	ios_base::sync_with_stdio(false);
	cin.tie(nullptr);
	cout.tie(nullptr);
	cin >> T;
	for (int tc = 1; tc <= T; tc++) {
		input();
		solve();
	}
	return 0;
}