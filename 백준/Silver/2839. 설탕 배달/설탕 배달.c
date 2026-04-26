#include <stdio.h>

int main(void)
{
	unsigned long long int min=5000/3;
	int N;
	scanf("%d", &N);
	for (int i = 0; i <= N / 3; i++) 
	{
		for (int j = 0; j <= N / 5; j++) 
		{
			if ((i * 3 + j * 5) > N) break;
			else if ((i * 3 + j * 5) == N) 
			{
				if ((i + j) < min) min = i + j;
			}
		}
	}
	if (min == 5000 / 3) 
	{
		printf("%d", -1);
	}
	else printf("%d", min);
}