#include <iostream>
#include <vector>
using namespace std;
int n;
vector<int> trees[100000+1];
vector<int> parents(100000+1);
void inputData() 
{
	cin >> n;
	for (int i = 1; i <n; i++) 
	{
		int e1, e2;
		cin >> e1 >> e2;
		trees[e1].push_back(e2);
		trees[e2].push_back(e1);
	}
}
void findparent(int start) 
{
	for (int i = 0; i < trees[start].size(); i++) 
	{
		if (parents[trees[start][i]]) continue;
		parents[trees[start][i]] = start;
		findparent(trees[start][i]);
	}
}
void solve() 
{
	parents[1] = 1;
	findparent(1);
	for (int i = 2; i <= n; i++) 
	{
		cout << parents[i] << '\n';
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