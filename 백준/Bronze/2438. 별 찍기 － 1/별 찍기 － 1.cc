#include <stdio.h>

int main(void) {
	int n, r, c;
	scanf("%d", &n);
	for (r = 1; r <= n; r++) {
		for (c = 0; c < r; c++) {
			printf("*");
		}
		printf("\n");
	}
    return 0;
}