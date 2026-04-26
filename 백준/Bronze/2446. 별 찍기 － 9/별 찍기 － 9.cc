#include <stdio.h>

void MakeStar(int n)
{
	int r, c;
	for (r = 1; r <= n; r++)
	{
		for (c = 1; c <= 2 * n -1 -(r-1);c++) 
		{
			if (c < r) printf(" ");
			else printf("*");
		}
		printf("\n");
	}
	for (r = n + 1; r <= 2 * n - 1; r++)
	{
		for (c = 1; c <= r; c++)
		{
			if (c <= (2 * n - 1) - r)
			{
				printf(" ");
			}
			else printf("*");
		}
		printf("\n");
	}
}

int main(int n) {
	scanf("%d", &n);
	MakeStar(n);
    return 0;
}