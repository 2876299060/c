#include<stdio.h>
int main()
{
	int a,b,c,x;
	printf("�����һ��������:");
	scanf("%d",&x);
	a=x/100;
	b=x/10%10;
	c=x%10;
	if(x==a*a*a+b*b*b+c*c*c)
		printf("%d��ˮ�ɻ���\n",x);
	else
		printf("%d����ˮ�ɻ���\n",x);
	return 0;

}