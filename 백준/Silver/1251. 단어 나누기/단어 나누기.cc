#include <iostream>
#include <algorithm>
#include <string>
#include <vector>
#include <set>

using namespace std;
set<string>sets;
int main(void) {
	string word;
	cin >> word;
	for (int f = 1; f < word.size()-1; f++) {
		for (int s = f + 1; s < word.size(); s++) {
			string newWord;
			newWord.resize(word.size());
			copy(word.begin(), word.end(), newWord.begin());
			reverse(newWord.begin(), newWord.begin() + f);
			reverse(newWord.begin() + f, newWord.begin() + s);
			reverse(newWord.begin() + s, newWord.end());
			sets.insert(newWord);
		}
	}
	cout << *sets.begin();
	return 0;
}