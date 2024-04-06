#include<stdio.h>
int main()
{
	int a,b,c,x;
	printf("请输出一个正整数:");
	scanf("%d",&x);
	a=x/100;
	b=x/10%10;
	c=x%10;
	if(x==a*a*a+b*b*b+c*c*c)
		printf("%d是水仙花数\n",x);
	else
		printf("%d不是水仙花数\n",x);
	return 0;

}