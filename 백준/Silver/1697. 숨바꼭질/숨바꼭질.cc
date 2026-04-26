#include <iostream>
#include <queue>
using namespace std;
int N, K;
int arr[200000 + 10];
int X[] = {-1,1};
int visited[200000 + 10];
struct POS
{
	int pos;
	int time;
};
queue<POS> Q;
void input(void) 
{
	cin >> N >> K;
};
int BFS(void) 
{
	if (N == K) return 0;
	Q.push({ N,0 });
	while (!Q.empty()) 
	{
		POS now = Q.front();
		Q.pop();
		for (int i = 0; i < 3; i++) 
		{
			POS temp;
			if (i < 2) 
			{
				temp.pos = now.pos + X[i];
			}
			else 
			{
				temp.pos = now.pos * 2;
			}
			temp.time= now.time + 1;
			if (temp.pos < 0)continue;
			if (temp.pos >100000) continue;
			if (visited[temp.pos]) continue;
			if (temp.pos == K) return temp.time;
			Q.push(temp);
			visited[temp.pos] = 1;
			//cout << temp.pos <<'\n';
		}
	}
	return -1;
}
int main(void) 
{
	input();
	int ans = BFS();
	cout << ans;
}