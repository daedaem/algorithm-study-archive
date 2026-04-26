#include <iostream>
#include <queue>
#include <set>
using namespace std;
#define MIN (0xf777777)
struct ST {
	long long num;
	int cnt;
};
queue<ST>q;
set<long long> numbers;
long long F, S, G, U, D;
long long minn = MIN;
void input() {
	cin >> F >> S >> G >> U >> D;
}
void BFS() {
	if (S == G) {
		minn = 0;
		return;
	}
	q.push({ S, 0 });
	numbers.insert(S);
	while (!q.empty()) {
		ST data = q.front(); q.pop();
		if (data.num == G && data.cnt < minn) {
			minn = data.cnt;
		}
		for (int i = 0; i < 2; i++) {
			if (i == 0) {
				ST newdata = data;
				newdata.num += U;
				newdata.cnt++;
				if (newdata.num > F) continue;
				if (numbers.find(newdata.num) != numbers.end()) continue;
				numbers.insert(newdata.num);
				q.push(newdata);
			}
			else {
				ST newdata = data;
				newdata.num -= D;
				newdata.cnt++;
				if (newdata.num < 1) continue;
				if (numbers.find(newdata.num) != numbers.end()) continue;
				numbers.insert(newdata.num);
				q.push(newdata);
			}
		}
	}
	return;
}
int main(void) {
	ios_base::sync_with_stdio(false);
	cin.tie(nullptr); cout.tie(nullptr);
	input();
	BFS();
	if (minn == MIN) {
		cout << "use the stairs" << '\n';
	}
	else {
		cout << minn << '\n';
	}
}