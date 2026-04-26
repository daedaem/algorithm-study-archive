#include <stdio.h>
#include <string.h>
char strings[1000000 + 10];
int lens;
char stack[1000000 + 10];

void output(void);
void changearr(void);
int main(void) 
{
	fgets(strings, 100000 + 10, stdin);
	lens = strlen(strings);
	changearr();
	output();
	
	return 0;
}
void output(void) 
{
	for (int i = 0; i < lens - 1; i++)
	{
		printf("%c", strings[i]);
	}
}
void changearr(void) 
{
	int start, end;
	for (int i = 0; i < lens-1; i++) 
	{
		if (strings[i] == '\n') break;
		if (strings[i] == '<') 
		{
			while (1) 
			{
				if (strings[i] == '>') break;
				i++;
			}
			continue;
		}
		if (strings[i] == ' ') continue;
		//정상적인 문자면
		else 
		{
			start = i;
			while (1) 
			{
 				if (strings[i + 1] == ' ' || strings[i+1]=='\n' || strings[i+1]=='\0'|| strings[i+1]=='<'|| strings[i + 1] == '>')
				{
					end = i;
					break;
				}
				i++;
			}
			for (int i = 0; i <=(end-start)/2; i++) 
			{
				int temp;
				temp = strings[start+i];
				strings[start+i] = strings[end - i];
				strings[end - i] = temp;
			}
		}
	}
}