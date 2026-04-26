#include <iostream>
#include <cstring>
#include <vector>
using namespace std;
#define MAX_N (100)
int N;
int arr[MAX_N + 1][MAX_N + 1];
int result[MAX_N + 1][MAX_N + 1];
int visit[MAX_N + 1];
vector<int> adjlist[MAX_N + 1];
//vector<int> path;
void DFS(int now, int start) {
	for (int i = 0; i < adjlist[now].size(); i++) {
		int next = adjlist[now][i];
		if (!arr[now][next]) continue;
		if (visit[next]) continue;
		visit[next] = 1;
		result[start][next] = 1;
		DFS(next, start);
	}
}
void print() {
	for (int r = 1; r <= N; r++) {
		for (int c = 1; c <= N; c++) {
			cout << result[r][c] << " ";
		}
		cout << '\n';
	}
}
int main(void) {
	ios_base::sync_with_stdio(false);
	cin.tie(nullptr);
	cout.tie(nullptr);
	cin >> N;
	for (int r = 1; r <= N; r++) {
		for (int c = 1; c <= N; c++) {
			cin >> arr[r][c];
			if (arr[r][c]) {
				adjlist[r].push_back(c);
			}
		}
	}
	for (int i = 1; i <= N; i++) {
		memset(visit, 0, sizeof(visit));
		DFS(i, i);
	}
	print();

	return 0;
}