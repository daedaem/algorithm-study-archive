#include <iostream>

using namespace std;
int N, M;
int minp=1000, mine=1000;
int main(void) {
	cin >> N >> M;
	for (int i = 0; i < M; i++) {
		int p, e;
		cin >> p >> e;
		if (minp > p) minp = p;
		if (mine > e)mine = e;
	}
	int moc = N / 6;
	int nam = N - moc * 6;
	if (minp > mine * 6) minp = mine * 6;
	int answer;
	if (minp < nam * mine) {
		answer = (moc + 1) * minp;
	}
	else {
		answer = moc * minp + nam * mine;
	}
	cout << answer;

	return 0;
}