#include<stdio.h>
int main()
{
	int day,p,i;
	day=10;
	p=1;
	for(i=day-1;i>=1;i--)
	{
		p=(p+1)*2;
	}
	printf("开始有%d个桃子\n",p);
	return 0;
}
