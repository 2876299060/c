#include<stdio.h>
int main()
{
	int a=0;
	int b=0;
	int c=0;
	printf("请输入三个数字");
	scanf("%d%d%d",&a,&b,&c);
	if(a<b)
	{
		int n=b;
		
		b=a;
		a=n;
	}
	if(a<c)
	{
		int n=c;
		c=a;
		a=n;
	}
	if(b<c)
	{
		int n=c;
		c=b;
		b=n;
		
	}
	 printf("%d%d%d",a,b,c);
	 return 0;
	
}