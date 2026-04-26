#include <stdio.h>
char N[101];

int main(void)
{

	for (int i = 1;; i++) 
	{
		scanf("%c", &N[i]);
		if (N[i]=='\n') 
		{
			break;
		}
		printf("%c", N[i]);
		if (!(i %= 10)) printf("\n");
	}
}