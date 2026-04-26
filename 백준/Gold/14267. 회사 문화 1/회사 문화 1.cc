#include <iostream>
#include <vector>
using namespace std;
int n, m;
struct EDGE 
{
	int next;
	int val;
};
vector<EDGE> peo[100000 + 1];
int result[100000 + 1];
struct person
{
	int target;
	int val;
};
void inputData() 
{
	cin >> n >> m;
	for (int i = 1; i <=n; i++) 
	{
		int boss; cin >> boss;
		if (boss == -1) peo[0].push_back({ i,0 });
		else peo[boss].push_back({ i,0 });
	}
	for (int i = 0; i < m; i++) 
	{
		int cus, val; cin >> cus >> val;
		result[cus] += val;
	}
}
void DFS(int target, int sum) 
{
	result[target] += sum;
	for (auto nn : peo[target]) 
	{
		DFS(nn.next, result[target]);
	}
}

int main(void) 
{
	ios_base::sync_with_stdio(false);
	cin.tie(nullptr); cout.tie(nullptr);
	inputData();
	DFS(1,0);
	for (int i = 1; i <= n; i++) 
	{
		cout << result[i] << " ";
	}
	
	return 0;
}