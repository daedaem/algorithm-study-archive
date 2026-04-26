#if 1
#include <iostream>
#include <vector>
#define MAX_N ((int)1e5)
using namespace std;
int N, R, Q;
vector<int> trees[MAX_N+1];
int check[MAX_N + 1];
int query[MAX_N + 1];
void inputData()
{
	cin >> N >> R >> Q;
	for (int i = 0; i < N - 1; i++) 
	{
		int U, V; cin >> U >> V;
		trees[U].push_back(V);
		trees[V].push_back(U);
	}
	for (int i = 0; i < Q; i++) 
	{
		cin >> query[i];
	}
}
int DFS(int node) 
{
	check[node] = 1;
	for (int nextnode : trees[node]) 
	{
		if (check[nextnode]) continue;
		check[node] += DFS(nextnode);
	}
	return check[node];
}

int main() 
{
	ios_base::sync_with_stdio(false);
	cin.tie(nullptr); cout.tie(nullptr);
	inputData();
	DFS(R);
	for (int i = 0; i < Q; i++) 
	{
		cout << check[query[i]] << '\n';
	}
}
#endif
