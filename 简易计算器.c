#include<stdio.h>
int main()
{
	float num1,num2;
	char oper;
	scanf("%f%c%f",&num1,&oper,&num2);
	if(oper=='+')
	{
		printf("%.2f%c%.2f=%.2f\n",num1,oper,num2,num1+num2);
	}
	else if(oper=='-')
	{
		printf("%.2f%c%.2f=%.2f\n",num1,oper,num2,num1-num2);	
	}
	else if(oper=='*')
	{
		printf("%.2f%c%.2f=%.2f\n",num1,oper,num2,num1*num2);
	}
	else
	{
		if(num2==0)
		{
			printf("分母为0，不能进行运算\n");
		}
		else
		{
			printf("%.2f%c%.2f=%.2f\n",num1,oper,num2,num1/num2);	
		}
	}
	return 0;
}