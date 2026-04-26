#include <stdio.h>
int makenumber(int n) 
{
	int sum=0;
	sum += n;
	while (n > 0)
	{
		sum += (n % 10);
		n /= 10;
	}
	return sum;
}
int main(void)
{
	int idx,j=1;
	unsigned long long int visited[10001] = { 0 };
	unsigned long long int arr[10001] = {0};
	for (idx = 1; idx <= 10000; idx++)
	{
 		if (arr[idx] == 0)
		{
			printf("%d\n", idx);
		}
		j = makenumber(idx);
		if (j > 10000) continue;
		if (arr[j] == 1)continue;
		arr[j] = 1;
		while (j<=10000) 
		{
			j = makenumber(j);
			if (j >= 10000) break;
			if (arr[j] == 1) continue;
			else arr[j] = 1;
		}
	}
}