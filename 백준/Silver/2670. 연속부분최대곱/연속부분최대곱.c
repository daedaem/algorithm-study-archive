#include <stdio.h>
int N;
double nowvalue = 1;
double maxx=0;
double arr[10000 + 10];
double check(void) 
{
	for (int i = 0; i < N; i++) 
	{
		if (nowvalue < 1)
		{
			nowvalue = arr[i];
		}
		else 
		{
			nowvalue*=arr[i];
		}
		if (maxx < nowvalue) maxx = nowvalue;
	}
	return maxx;
}
void input(void) 
{
	scanf("%d", &N);
	for (int i = 0; i < N; i++) 
	{
		scanf("%lf", &arr[i]);
	}
}
int main(void)
{
	input();
	printf("%.3f", check());
	return 0;
}