#if 1
#include <iostream>
#include <string>
#include <unordered_set>
using namespace std;
unordered_set<string> s;
string words[10000+2];
int N, M;
void inputData()
{
	cin >> N; 	cin >> M;

	for (int i = 0; i < N; i++)
	{
		string a; cin >> a;
		s.insert(a);
	}
	for (int i = 0; i < M; i++)
	{
		string a; cin >> a;
		words[i] = a;
	}
}
void solve()
{
	int cnt = 0;
	for (int i = 0; i < M; i++)
	{
		auto iter = s.find(words[i]);
		if (iter != s.end()) cnt++;
	}
	cout << cnt;
}
int main(void)
{
	ios_base::sync_with_stdio(false);
	cin.tie(nullptr); cout.tie(nullptr);
	inputData();
	solve();
	return 0;
}
#endif