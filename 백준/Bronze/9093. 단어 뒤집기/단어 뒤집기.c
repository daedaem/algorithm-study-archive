#include <stdio.h>
#include <string.h>

void changeWords(char temp[], int len);
int main(void)
{
	int T;
	int cnt = 0;
	int len;
	char arr[1010];
	char temp[30];
	scanf("%d ", &T);
	for (int i = 0; i < T; i++)
	{
		arr[1010];
		temp[30];
		gets(arr);
		len = strlen(arr);

		for (int j = 0; j <= len; j++)
		{
			if ((arr[j] == ' ')||(j==len))
			{
				changeWords(temp, cnt);
				cnt = 0;
			}
			else 
			{ 
				temp[cnt] = arr[j];
				cnt++;
			}
		}
		printf("\n");
	}
	return 0;
}
void changeWords(char temp[], int len)
{
	for (int i = len-1; i >= 0; i--)
	{
		printf("%c", temp[i]);
		temp[i] = 0;
 	}
	printf(" ");
}