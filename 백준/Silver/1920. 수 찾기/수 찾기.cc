#include <iostream>
#include <algorithm>
using namespace std;
int A[100000 + 2];
int arr[100000 + 2];
int N, M;
void inputData()
{
	cin >> N;
	for (int i = 0; i < N; i++)
	{
		cin >> A[i];
		
	}
	sort(A, A + N);
		cin >> M;
	for (int i = 0; i < M; i++)
	{
		cin >> arr[i];
	}
}
int BinarySearch(int findN) 
{
	int start = 0;
	int end = N - 1;

	while (1) 
	{
		int mid = (start + end) / 2;
		if (A[mid] == findN) return 1;
		else if (A[mid] < findN) start = mid + 1;
		else end = mid - 1;
		if (start > end) break;

	}
	return 0;
}
void solve()
{
	for (int i = 0; i < M; i++) 
	{
		if(BinarySearch(arr[i])) cout << 1<<'\n';
		else cout << 0 << '\n';
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