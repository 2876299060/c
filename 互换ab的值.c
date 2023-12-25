#include<stdio.h>
int main()
{
	int a=0;
	int b=0;
	printf("请输入a,b的值：\n");
	scanf("%d,%d",&a,&b);
    a=a+b;
    b=a-b;
    a=a-b;
    printf("a=%d,b=%d",a,b);
    return 0;
}