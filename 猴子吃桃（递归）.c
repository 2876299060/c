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
	printf("��һ�����ժ��%d������\n",fp);
	return 0;
}