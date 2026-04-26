#include<iostream>
#include<algorithm>

using namespace std;
#define MAX_N (1000)
int N;
int dp[MAX_N + 1];
int card[MAX_N + 1];
void input() {
	cin >> N;
	for (int i = 1; i <= N; i++) {
		cin >> card[i];
	}
}
void solve() {
	dp[0] = 0;
	for (int i = 1; i <= N; i++) {
		for (int j = 0; j <= i; j++) {
			dp[i] = max(dp[i], card[i - j] + dp[j]);
		}
	}
	cout << dp[N];
}
int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(nullptr);
	cout.tie(nullptr);
	input();
	solve();
	return 0;
}
