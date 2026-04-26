#include <iostream>
#include <vector>
#include <cstring>
using namespace std;

int N;
long long K;
vector<long long> arr;
long long sumTable[100000];
int main(void) {
	ios_base::sync_with_stdio(false);
	cin.tie(nullptr);
	cin >> N;
	arr.resize(N + 1);
	long long cnt = 0;
	for (int i = 1; i <= N; i++) {
		cin >> arr[i];
		sumTable[i] = sumTable[i - 1] + arr[i];
	}
	cin >> K;
	for (int i = 1; i <= N; i++) {
		if (arr[i] > K) cnt++;
	}
	for (int j = 0; j < N; j++) {
		for (int i = 2; i + j <= N; i++) {
			if (sumTable[j + i] - sumTable[j] > K) {
				cnt += N - j - i + 1;
				break;
			}
		}
	}
	cout << cnt << '\n';
}