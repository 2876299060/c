#include<stdio.h>
#include<string.h>
int main()
{
	char a[1000];//char的存放范围只有0——255
	int i;
	for(i=0;i<1000;i++)
	{
		a[i]=-1-i;//-1  -2  -3......-128  127  126......2  1  0(0的ASCLL码值是\0)
	}
	printf("%d\n",strlen(a));//strlen求字符串长度找到\0时结束
	return 0;
}