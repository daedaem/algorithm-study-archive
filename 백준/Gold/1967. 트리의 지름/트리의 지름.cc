#include <iostream>
#include <algorithm>
#include <vector>
#define MAX_N (10000)
using namespace std;
int n;
int max_val;
int max_node;
struct NODE 
{
	int next;
	int val;
};
vector<NODE> trees[10000 + 1];
int check[10000 + 1];
void inputData() 
{
	cin >> n;
	for (int i = 0; i < n - 1; i++) 
	{
		int p, next, val; cin >> p >> next >> val;

		trees[p].push_back({ next, val });
		trees[next].push_back({ p, val });

	}
}
void find_maxD(int pnode, int sums) 
{
	if (max_val < sums) 
	{
		max_node = pnode;
		max_val = sums;
	}
	check[pnode] = sums;
	for (auto nextnode : trees[pnode]) 
	{
		if (check[nextnode.next])continue;
		find_maxD(nextnode.next, sums+nextnode.val);
	}
}
int solve() 
{
	int result = 0;
	find_maxD(1 , 1);
	fill(check+1, check + n+1, 0);
	find_maxD(max_node, 1);
	//cout << result << '\n';
	//cout << "maxnode:" << max_node << '\n';
	result = max_val-1;
	return result;
}
int main() 
{
	inputData();
	cout << solve()<<'\n';
	return 0;
}