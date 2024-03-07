//求一个数的平方根,输出宽度为7位，保留小数后两位
#include<stdio.h>
#include<math.h>
int main()
{
	double a,b;
	scanf("%lf",&a);
	b=sqrt(a);
	printf("b=%7.2lf\n",b);
	return 0;
}