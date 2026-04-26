#include <stdio.h>
#include <string.h>
int func(char word)
{
	if ((word >= 'a') && (word <= 'z')) return 1;
	if ((word >= 'A') && (word <= 'Z')) return 1;
	return 0;
}
int main() 
{
	char words[1000010];
	int sum = 0;
	int len;
	int cnt = 0;
	gets(words);
	len = strlen(words);
	for (int i = 0; i < len; i++) 
	{
		//맨 앞에가 공백인 경우
		// 숫자세야할 때,
		if ((func(words[i])) && ((words[i + 1] == ' ')||(words[i+1]=='\0')))
			sum++;
	}
	printf("%d", sum);

	return 0;
}