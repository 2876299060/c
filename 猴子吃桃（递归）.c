#include<stdio.h>
int first(int day,int lastp)
{
	if(day==1)
		return lastp;
	else
		return first(day-1,(lastp+1)*2);
}
int main()
{
	int fp,d,lp;
	lp=1;
	d=10;
	fp=first(d,lp);
	printf("第一天猴子摘了%d个桃子\n",fp);
	return 0;
}