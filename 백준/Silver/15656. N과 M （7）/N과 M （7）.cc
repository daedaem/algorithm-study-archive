#include <iostream>
#include <vector>
#include <algorithm>
#include <unordered_set>
using namespace std;
int N, M;
vector<int> arr;
int numbers[8 + 1];
void dfs(int dep)
{
	if (dep >= M)
	{
		for (int i = 0; i < arr.size(); i++)
		{
			cout << arr[i] << " ";
		}
		cout << '\n';
		return;
	}
	for (int i = 0; i < N; i++)
	{
		arr.push_back(numbers[i]);
		dfs(dep + 1);
		arr.pop_back();
	}
}
int main(void)
{
	cin >> N >> M;
	for (int i = 0; i < N; i++)
	{
		cin >> numbers[i];
	}
	sort(numbers, numbers + N);
	dfs(0);
	return 0;
}