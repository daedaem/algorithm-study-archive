#include <iostream>
using namespace std;

int N, M;
int arr[8];
void DFS(int dep){
    if(dep == M+1){
        for(int i=1;i<=M;i++){
                cout << arr[i]<<" ";
          
        }
        cout <<'\n';
        return;
    }
    for(int i=1; i<=N;i++){
        arr[dep]=i;
        DFS(dep+1);
    }
    
}
int main(void){
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
    cin >> N >>M;
    DFS(1);
    return 0;    
}