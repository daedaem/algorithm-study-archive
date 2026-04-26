#include <stdio.h>
#define SIZE(a) sizeof(a)/sizeof(a[0])

char alph[] = { "abcdefghizklmnopqrstuvwxyz" };

int main(void)
{
	char record['z'-'a'+1];
	char word;
	int lengths;
	for (int i = 0; i < SIZE(record); i++) 
	{
		record[i] = -1;
	}

	for (int i = 0;; i++)
	{
		scanf("%c", &word);
		if (word == '\n') 
		{ 
			lengths = i;
			break;
		}
		if (record[word - 'a'] == -1)
			record[word - 'a'] = i;
	}
	for (int i = 0; i < SIZE(record); i++)
	{
		printf("%d ", record[i]);
	}
}