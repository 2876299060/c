//求三角形的面积，输出宽度为7位，保留小数点后两位
#include<stdio.h>
#include<math.h>
int main()
{
	double a,b,c,p,S;
	printf("请输入三角形三条边的长度\n");
	scanf("%lf%lf%lf",&a,&b,&c);
	p=(a+b+c)/2;
	S=sqrt(p*(p-a)*(p-b)*(p-c));
	printf("S=%7.2lf\n",S);
	return 0;
}