//쳲���������1  1  2  3  5   f(n)=f(n-1)+f(n-2)
#include<stdio.h>
int main()
{
	int a1,a2,sum,m,i,x;
	a1=a2=1;
	printf("��쳲��������еڼ���:");
	scanf("%d",&x);
	if(x>2)
	{
	for(i=2;i<x;i++)
	{
		sum=a1+a2;
		m=a1;
		a1=a2;
		a2=a1+m;
	}
	printf("��%d��Ϊ%d\n",x,sum);
	}
	else if((x==1)||(x==2))
	{
		sum=1;
		printf("��%d��Ϊ%d\n",x,sum);
	}
	else
	{
	printf("�������\n");
	}
	return 0;
}