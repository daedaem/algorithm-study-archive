#include <stdio.h>

int main(void) 
{
	int n, space,r, c;
	scanf("%d", &n);
	for (r = 0; r < n; r++) {
		for (space = 0; space < r; space++) {
			printf(" ");
		}
		for (c = 1; c <= (2*(n-r))-1 ; c++) {
			printf("*");
		}
		printf("\n");
	}
	return 0;
}