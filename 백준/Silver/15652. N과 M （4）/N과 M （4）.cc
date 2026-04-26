#include<iostream>
using namespace std;

int N, M;
int arr[10];
void DFS(int dep, int start){
	if (dep == M + 1) {
		for (int i = 1; i <= M; i++) {
			cout << arr[i] << " ";
		}
		cout << '\n';
		return;
	}
	for(int i=start; i<=N;i++){
		arr[dep] = i;
		DFS(dep + 1, i);
	}
}
int main(void) {
	cin >> N >> M;
	DFS(1, 1);
	
	return 0;
}

