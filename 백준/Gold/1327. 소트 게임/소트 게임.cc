#include <iostream>
#include <algorithm>
#include <unordered_set>
#include <queue>
#include <cmath>
#include <string>
using namespace std;

struct STATUS
{
	string s;
	int cnt;
};
queue<STATUS> Q;
unordered_set<string> S;
int arr[8 + 1];
int otarr[8 + 1];
string results;
int N, K;
void inputData(void)
{
	cin >> N >> K;
	for (int i = 0; i < N; i++)
	{
		cin >> arr[i];
		otarr[i] = arr[i];
	}
}
string changearr(string a, int i) 
{
	for (int j = 0; j < K/2; j++)
	{
		char bb = a[i + j];
		a[i + j] = a[i+K-1 - j];
		a[i + K-1 - j] = bb;
	}
	return a;
}
int BFS() 
{
	sort(otarr, otarr + N);
	for (int i =0 ; i < N; i++) 
	{
		results += otarr[i] + '0';
	}
	string start;
	for (int i = 0; i < N; i++)
	{
		start += arr[i] + '0';
	}

	if (start == results) return 0;

	S.insert(start);
	Q.push({ start , 0});
	while (!Q.empty()) 
	{
		STATUS DATA = Q.front(); Q.pop();
		for (int i = 0; i <=N - K; i++) 
		{
			STATUS newdata = DATA;
			newdata.s = changearr(DATA.s, i);
			newdata.cnt += 1;
			if (S.find(newdata.s) != S.end()) continue;
			if (newdata.s == results) return newdata.cnt;
			Q.push(newdata);
			S.insert(newdata.s);
		}
	}
	return -1;
}
int main(void) 
{
	inputData();
	int ans = BFS();
	cout << ans;
}