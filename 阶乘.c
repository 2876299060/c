#include<stdio.h>
int main()
{
	int i=0;
	int n=0;
	int ret=1;
	printf("您想要求谁的阶乘？\n");
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
		ret=ret*i;
	}
	printf("您想要求的数的阶乘为：%d",ret);
	return 0;
}