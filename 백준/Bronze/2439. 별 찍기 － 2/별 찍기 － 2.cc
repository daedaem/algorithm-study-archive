#include <stdio.h>

int main(void) {
	int n, r, c;
	scanf("%d", &n);
	for (r = 1; r <= n; r++) {
		for (c = 1; c <=n;c++) {
			if (c <= (n - r)) {
                printf(" ");
            }
			else {
                printf("*");
            }
		}
		printf("\n");
	}
	return 0;
}