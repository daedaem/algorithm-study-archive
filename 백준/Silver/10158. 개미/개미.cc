#include <iostream>
using namespace std;
int w, h, p, q;
long long t;
void input() 
{
	cin >> w >> h >> p >> q >> t;
}
void solve()
{
	if ((q + t) / h % 2) q = h - (q + t) % h;
	else  q = (q + t) % h;

	if ((p + t) / w % 2) p = w - (p + t) % w;
	else p = (p + t) % w; 
    
	cout << p << " " << q;
}
int main(void) 
{
	input();
	solve();
	return 0;
}