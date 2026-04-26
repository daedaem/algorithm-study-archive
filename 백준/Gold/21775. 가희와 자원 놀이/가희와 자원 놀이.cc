#include <iostream>
#include <ctime>
#include <string>
#include <queue>
#include <set>
using namespace std;
#define MAX_N (500000)
int N, T;

vector<int> order;
struct CARD {
	int id;
	string ord;
	int option;
};
deque<CARD> cards;
CARD players[MAX_N+2];
//set<string> s;
set<int> numbercards; // 누가 쓰는 카드

void input() {
	cin >> N >> T;
	for (int i = 0; i < T; i++) {
		int o; cin >> o;
		o--;
		order.push_back(o);
	}
	for (int i = 0; i < T; i++) {
		int id, num;
		string a;
		cin >> id >> a;
		if (a == "acquire" || a == "release") {
			cin >> num;
			cards.push_back({ id,a,num });
		}
		else cards.push_back({ id,a,0 });
	}
}
void simulation() {
	for (int i = 0; i < T; i++) {
		int pidx = order[i]; // 사람 인덱스
		if (players[pidx].id == 0) {
			players[pidx] = cards.front(); cards.pop_front();
		}
		int id = players[pidx].id;
		string ord = players[pidx].ord;
		int opt = players[pidx].option;
		cout << id << '\n';
		if (ord == "next") {
			players[pidx].id = 0;
		}
		else if (ord == "acquire") {
			if (numbercards.find(opt) == numbercards.end()) {
				numbercards.insert(opt);
				players[pidx].id = 0;
			}
		}
		else {
			numbercards.erase(opt);
			players[pidx].id = 0;
		}
	}
}


int main(void) {
	ios_base::sync_with_stdio(false);
	cin.tie(nullptr);
	cout.tie(nullptr);

	input();
	simulation();

	return 0;
}

