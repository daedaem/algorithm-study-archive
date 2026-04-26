#include <stdio.h>
int pibonacci(int n);

int pibo[20 + 10] = { 0,1,1, };

int main(void)
{
	int n;
	scanf("%d", &n);
	for (int i = 0; i <= n; i++) 
	{
		pibo[i] = pibonacci(i);
	}
	printf("%d", pibo[n]);
	return 0;
}
int pibonacci(int n) 
{
	if (n == 0) return 0;
	if (n == 1) return 1;
	else return pibonacci(n-1) + pibonacci(n - 2);
}