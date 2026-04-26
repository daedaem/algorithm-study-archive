#include <stdio.h>

void MakeStar(int n) 
{
	int i,j;
	for (i = 1; i <= 2 * n; i++) {
		if (i <= n) {
		for (j = 1; j <= 2 * n; j++) {
			
				if ((j <= i) || (j >= (2 * n +1 - i))) {
					printf("*");
				}
				else {
					printf(" ");
				}
			}
		printf("\n");
		}
		else 
		{
			for (j = 1; j <= 2 * n; j++) {
				if ((j <= 2*n-i) || (j > i)) {
					printf("*");
				}
				else printf(" ");
			}
			printf("\n");
		}	
	}		
}
int main(void) {
	int n;
	scanf("%d", &n);
	MakeStar(n);
	return 0;
}