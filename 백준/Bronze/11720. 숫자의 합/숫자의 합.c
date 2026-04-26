#include <stdio.h>
char number[101];

int main(void) {
	int N, sum=0;
	
	scanf("%d", &N);
	for (int i = 0; i<N; i++) 
	{
		scanf(" %c", &number[i]);
		sum += (number[i] - '0');
	}
	printf("%d", sum);
	return 0;
}