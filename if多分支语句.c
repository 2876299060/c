#include<stdio.h>
int main()
{
	double x;
	printf("�������������Ѷ�:");
	scanf("%lf",&x);
	if(x>=10000)
		printf("���ۺ���Ϊ%lf",x*0.85);
	else if(x>=5000&&x<10000)
		printf("���ۺ���Ϊ%lf",x*0.95);
	else if(x>=1000&&x<5000)
		printf("���ۺ���Ϊ%lf",x*0.85);
	else
		printf("���ۺ���Ϊ%lf",x);
	return 0;
}