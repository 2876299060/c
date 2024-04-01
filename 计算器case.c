#include<stdio.h>
void menu()
{
	printf("********************************\n");
	printf("******1.Add          2.Sub******\n");
	printf("******3.Mul          4.Div******\n");
	printf("***********  0.exit  ***********\n");
	printf("********************************\n");
}
void Calc(int (*p)(int ,int ))
{
	int x=0,y=0;
	printf("请输入两个数字:");
	scanf("%d%d",&x,&y);
	printf("%d\n",p(x,y));

}
Add(int a ,int b )
{
	return a+b;
}
Sub(int a,int b)
{
	return a-b;
}
Mul(int a,int b)
{
	return a*b;
}
Div(int a,int b)
{
	return a/b;
}
int main()
{
	int input=0;
	do
	{
		menu();
		printf("请选择:");
		scanf("%d",&input);
		switch(input)
		{
		case 1:
			Calc(Add);
			break;
		case 2:
			Calc(Sub);
			break;
		case 3:
			Calc(Mul);
			break;
		case 4:
			Calc(Div);
			break;
		case 0:
			printf("退出程序\n");
			break;
		default:
			printf("输入错误\n");
			break;
		}
	}while(input);
	return 0;
}