#include <stdio.h>
int PrimeNumber(int n)
{
	if (n < 2) return 0;
	for (int idx = 2; idx < n; idx++)
	{
		if (!(n%idx)) return 0;
	}
	return 1;
}
int main(void)
{
	int n;
	int number, sum = 0;
	scanf("%d", &n);
	for (int i = 0; i < n; i++) 
	{
		scanf("%d", &number);
		if (PrimeNumber(number)) sum++;
	}
	printf("%d", sum);
}