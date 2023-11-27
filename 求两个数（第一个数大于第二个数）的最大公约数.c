#include<stdio.h>
int main()
{
	int a=24;
	int b=18;
	int r=0;
	while(a%b)
	{
		r=a%b;
		a=b;
		b=r;
	}
	printf("%d",r);
	return 0;
}