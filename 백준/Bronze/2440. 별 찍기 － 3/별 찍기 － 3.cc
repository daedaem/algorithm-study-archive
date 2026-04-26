#include <stdio.h>

int main(void)
{
	int n, r, c;
	scanf("%d", &n);
	for (r = 0; r < n; r++) {
		for (c = n; c > r; c--) {
			printf("*");
		}
		printf("\n");
	}
	return 0;
}