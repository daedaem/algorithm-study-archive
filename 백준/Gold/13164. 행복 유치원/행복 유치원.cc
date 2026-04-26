#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;
#define MAXN (300000)
int N, K;
long long maxx;
int student[MAXN + 1];
vector<int>perms;
vector<int> diffs;
void input() {
	cin >> N >> K;
	for (int i = 1; i <= N; i++) {
		cin >> student[i];
	}
}
long long solve() {
	for (int i = 1; i < N; i++) {
		diffs.push_back(student[i + 1] - student[i]);
	}
	sort(diffs.begin(), diffs.end());
	long long result = 0;
	for (int i = 0; i < N- K; i++) {
		result += diffs[i];
	}
	return result;
}
int main(void) {
	ios_base::sync_with_stdio(false);
	cin.tie(nullptr);
	cout.tie(nullptr);
	input();
	cout << solve() << '\n';
	return 0;

}