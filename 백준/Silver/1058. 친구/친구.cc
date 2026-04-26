#include <iostream>
#include <set>
#include <vector>
#include <string>
#include <algorithm>
using namespace std;
#define MAX_N (50)
vector<int> people[MAX_N + 1];
int visited[MAX_N + 1][MAX_N + 1];
int answer[MAX_N + 1];
int N;
int maxx;
void input() {
	cin >> N;
	for (int i = 0; i < N; i++) {
		string temp; cin >> temp;
		for (int j = 0; j < N; j++) {
			if (temp[j] == 'Y') {
				if (i == j) continue;
				visited[i + 1][j + 1] = 1;
				people[i + 1].push_back(j + 1);
				answer[i + 1]++;
				if (maxx < answer[i + 1]) maxx = answer[i + 1];
			}
		}
	}
}

void solve() {
	for (int i = 1; i <= N; i++) {
		for (int k = 0; k < people[i].size(); k++) {
			int person = people[i][k];
			for (int j = 0; j < people[person].size(); j++) {
				int nextperson = people[person][j];
				if (i == nextperson) continue;
				if (!visited[i][nextperson]) {
					answer[i]++;
					if (maxx < answer[i]) maxx = answer[i];
					visited[i][nextperson] = 1;
				}
			}
		}
	}
	cout << maxx;
}
int main(void) {
	ios_base::sync_with_stdio(false);
	cin.tie(nullptr);
	input();
	solve();

	return 0;
}