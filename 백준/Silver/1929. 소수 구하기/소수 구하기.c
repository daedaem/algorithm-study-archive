#include <stdio.h>
int arr[1000001] = {0};
void check(int m, int n)
{
    arr[1]=1;
	for (int i = 2; i <= n; i++) 
	{
		for (int j = i + i; j <= n; j += i) 
		{
			if (!(arr[j])) arr[j] = 1;
		}
	}
	for (int i = m; i <= n; i++) 
	{
		if (!(arr[i])) printf("%d\n", i);
	}
}
int main(void)
{
	int m, n, temp;
	scanf("%d %d", &m, &n);
	if (m > n)
	{
		temp = m;
		m = n;
		n = temp;
	}
	check(m, n);
	return 0;
}