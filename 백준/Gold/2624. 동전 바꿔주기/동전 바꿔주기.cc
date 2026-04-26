#include <iostream>
#include <vector>

using namespace std;

#define MAX_T (10000)
struct CO {
	int coin, cnt;
};
vector<CO>coins;
vector<int> arr;
int dp[10000 + 1];
int T, K;
void input() {
	cin >> T >> K;
	for (int i = 0; i < K; i++) {
		int pi, ni; cin >> pi >> ni;
		coins.push_back({ pi, ni });
	}	
}
void solve() {
	dp[0] = 1;
	for (int i = 0; i < K; i++) {
		for (int total = T; total >= 0; total--) {
			for (int c = 1; c <= coins[i].cnt; c++) {
				if (total - coins[i].coin * c >= 0) dp[total] += dp[total - coins[i].coin * c];
			}
		}
	}
	cout << dp[T];
}
int main(void) {
	input();
	solve();
	return 0;
}