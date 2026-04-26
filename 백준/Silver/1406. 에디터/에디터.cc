#include <iostream>
#include <list>
#include <string>
using namespace std;

list<char> words;
int N;
void inputData() 
{
	string a; cin >> a;
	for (int i = 0; i < a.size(); i++) 
	{
		words.push_back(a[i]);
	}
	cin >> N;
}
void solve() 
{
	auto it= words.end();
	for (int i = 0; i < N; i++) 
	{
		char cc; cin >> cc;
		if (cc == 'L') 
		{
			if (it == words.begin()) continue;
			it = prev(it);
		}
		else if (cc == 'D') 
		{
			if (it == words.end()) continue;
			it = next(it);
		}
		else if (cc == 'B') 
		{
			if (it == words.begin()) continue;
			words.erase(prev(it));
		}
		else {
			char cs; cin >> cs;
			words.insert(it, cs);
		}
	}
}
int main(void) 
{
	ios_base::sync_with_stdio(false);
	cin.tie(nullptr); cout.tie(nullptr);
	inputData();
	solve();
	for (auto cc : words) 
	{
		cout << cc;
	}
	return 0;
}