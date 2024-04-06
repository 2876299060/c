#include<stdio.h>
int main()
{
	int a,b;
	printf("请输入一个正整数:");
	scanf("%d",&a);
	for(b=2;b<a;b++)
	{
		if(a%b==0)
			break;
	}
	if(b==a)
		printf("%d是素数\n",a);
	else
		printf("%d不是素数\n",a);
	return 0;
}