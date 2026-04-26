#include <stdio.h>
#include <string.h>
int main(void)
{
	int T;
	int n;
	char word[20];
	scanf("%d", &T);
	for (int i=0; i < T; i++) 
	{
		scanf("%d %s", &n, &word);
		for (int start = 0; start < strlen(word); start++) 
		{
			for (int j = 0; j < n; j++)
			{
				printf("%c", word[start]);
			}
		}
		printf("\n");
	}
}