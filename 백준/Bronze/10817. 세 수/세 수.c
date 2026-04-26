#include <stdio.h>

int main(void) {
	int A, B, C;
	scanf("%d %d %d", &A, &B, &C);
	if (A < B)
	{
		if (B > C) 
		{
			if (A < C) 
			{
				printf("%d", C);
			}
			else 
			{
				printf("%d", A);
			}
		}
		else 
		{
			printf("%d", B);
		}
	}
	else 
	{
		if (C > A) printf("%d", A);
		else 
		{
			if (B < C) printf("%d", C);
			else printf("%d", B);
		}
	}

	return 0;
}