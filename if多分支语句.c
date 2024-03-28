#include<stdio.h>
int main()
{
	double x;
	printf("请输入您的消费额:");
	scanf("%lf",&x);
	if(x>=10000)
		printf("打折后金额为%lf",x*0.85);
	else if(x>=5000&&x<10000)
		printf("打折后金额为%lf",x*0.95);
	else if(x>=1000&&x<5000)
		printf("打折后金额为%lf",x*0.85);
	else
		printf("打折后金额为%lf",x);
	return 0;
}