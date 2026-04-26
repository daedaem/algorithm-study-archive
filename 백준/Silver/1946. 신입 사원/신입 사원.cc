#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
int T, N;
vector<int> person;
void input() {
	cin >> N;
	person.clear();
	person.resize(N);
	for (int i = 0; i < N; i++) {
		int docum, interview; cin >> docum >> interview;
		person[docum-1] = interview;
	}
}
int solve() {
	int answer = 0;
	int maxx = N+1;
	for (int i = 0; i < N; i++) {
		if (maxx > person[i]) {
			maxx = person[i];
			answer++;
		}
	}
	return answer;
}
int main(void) {
	ios_base::sync_with_stdio(false);
	cin.tie(nullptr);
	cin >> T;
	for (int i = 0; i < T; i++) {
		input();
		cout << solve() << '\n';
	}
	return 0;
}