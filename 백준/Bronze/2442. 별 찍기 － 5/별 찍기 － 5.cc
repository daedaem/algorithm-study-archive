#include <stdio.h>
int main(void) 
{
	int r, left, c, n;
	scanf("%d", &n);
	for (r = 1; r <= n; r++) {
		for (left = n - r; left > 0; left--) {
			printf(" ");
		}
		for(c = 1; c <= (2 * r) - 1; c++) {
			printf("*");
		}
		printf("\n");
	}
	return 0;
}