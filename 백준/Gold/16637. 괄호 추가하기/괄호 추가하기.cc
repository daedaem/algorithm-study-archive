#include <iostream>

using namespace std;

#define MAX_N (19)

int N;
char expr[MAX_N + 2];

int sol = 0x80000000;

void Input_Data(void){
	int i;
	cin >> N;
	cin >> &expr[1];
	expr[0] = '+';
	for (i = 1; i <= N; i += 2) expr[i] -= '0';
}

int Use_Parentheses(int i)
{
	switch (expr[i + 1])
	{
	case '+':
		return expr[i] + expr[i + 2];
		break;
	case '-':
		return expr[i] - expr[i + 2];
		break;

	case '*':
		return expr[i] * expr[i + 2];
		break;
	}
	return 0;
}

void DFS(int i, int res)
{
	int num, j;
	int next_i;

	if (i > N)
	{
		if (sol < res) sol = res;
		return;
	}

	for (j = 0; j < 2; j++) // j => 0 : 괄호 사용 X, j => 1: 괄호 사용
	{
		if (j == 1 && i + 3 > N) break;
		switch (j)
		{
		case 0:
			num = expr[i + 1];
			next_i = i + 2;
			break;
		case 1:
			num = Use_Parentheses(i + 1);
			next_i = i + 4;
			break;
		}

		switch (expr[i])
		{
		case '+':
			DFS(next_i, res + num);
			break;
		case '-':
			DFS(next_i, res - num);
			break;
		case '*':
			DFS(next_i, res * num);
			break;
		}
	}
}


int main(void)
{
	ios_base::sync_with_stdio(false);
	cin.tie(nullptr);
	cout.tie(nullptr);

	Input_Data();

	DFS(0, 0);

	printf("%d\n", sol);

	return 0;
}