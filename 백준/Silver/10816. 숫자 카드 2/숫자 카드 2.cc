#include <iostream>
#include <unordered_map>
using namespace std;

int N, M;
unordered_map<int, int> cards;
int pb[500000+2];
void inputData() 
{
	cin >> N; 
	for (int i = 0; i < N; i++) 
	{
		int a; cin >> a;
		auto it = cards.find(a);
		if (it != cards.end()) 
		{
			//unordered_map<int, int>::iterator it = cards.find(a);
			it->second += 1;
		}
		else cards.insert({ a, 1 });
	}
	cin >> M;
	for (int i = 0; i < M; i++) 
	{
		cin >> pb[i];
	}
}
void solve() 
{
	for (int i = 0; i < M; i++)
	{
		auto it = cards.find(pb[i]);
		if (it != cards.end()) 
		{
			cout << it->second << " ";
		}
		else 
		{
			cout << 0 << " ";
		}
	}
}
int main(void) 
{
	ios_base::sync_with_stdio(false);
	cin.tie(nullptr); cout.tie(nullptr);
	inputData();
	solve();
	return 0;
}