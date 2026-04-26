#include <iostream>
#include <map>
using namespace std;

struct NODE
{
	char left;
	char right;
};

map<char, NODE>tree;
int N;
void inputData() 
{
	cin >> N;
	for (int i = 0; i < N; i++) 
	{
		char root, l, r;
		cin >> root >> l >> r;
		tree[root].left = l;
		tree[root].right = r;
	}
}
void preorder(char cnode) 
{
	if (cnode =='.') return;
	//if (tree[cnode].left != '.') cout << tree[cnode].left;
	cout << cnode;
	preorder(tree[cnode].left);
	//if (tree[cnode].right != '.') cout << tree[cnode].right;
	preorder(tree[cnode].right);
}
void inorder(char cnode)
{
	if (cnode == '.') return;

	inorder(tree[cnode].left);
	cout << cnode;
	//if (tree[cnode].right != '.') cout << tree[cnode].right;
	inorder(tree[cnode].right);
}
void postorder(char cnode)
{
	if (cnode == '.') return;

	postorder(tree[cnode].left);
	//if (tree[cnode].right != '.') cout << tree[cnode].right;
	postorder(tree[cnode].right);
	cout << cnode;
}
void solve() 
{
	preorder('A');
	cout << '\n';
	inorder('A');
	cout << '\n';
	postorder('A');
}
int main(void) 
{
	ios_base::sync_with_stdio(false);
	cin.tie(nullptr); cout.tie(nullptr);
	inputData();
	solve();
}
