#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
#define MAX 6
#define FASTIO cin.tie(0); cout.tie(0); ios::sync_with_stdio(false);

using namespace std;
int N, K;
int A[MAX];
int R[MAX][MAX], M[MAX][MAX];
int Answer;

void input() {
    cin >> N >> K;
    for (int i = 1; i <= N; i++) {
        cin >> A[i];
    }
    for (int i = 1; i <= K; i++) {
        for (int j = 1; j <= N; j++) {
            cin >> R[i][j];
        }
    }
    for (int i = 1; i <= K; i++) {
        for (int j = 1; j <= N; j++) {
            cin >> M[i][j];
        }
    }
}

void DFS(int Day, int Rang, int Mary) {
    if (Day > K) {
        Answer = max(Answer, Rang + Mary);
        return;
    }

    for (int i = 1; i <= N; i++) {
        int NewRang = Rang;
        int NewMary = Mary;
        if (A[i] > 0) {
            A[i]--;
            NewRang += R[Day][i];
            for (int j = 1; j <= N; j++) {
                if (A[j] > 0) {
                    A[j]--;
                    NewMary += M[Day][j];
                    DFS(Day + 1, NewRang, NewMary);
                    NewMary -= M[Day][j];
                    A[j]++;
                }
            }
            NewRang -= R[Day][i];
            A[i]++;
        }
    }
}

void settings() {
    DFS(1, 0, 0);
}

void find_Answer() {
    cout << Answer << "\n";
}

int main() {
    FASTIO
    input();
    settings();
    find_Answer();

    return 0;
}