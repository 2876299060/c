#include<stdio.h>
#include<string.h>
int main()
{
	char a[1000];//char�Ĵ�ŷ�Χֻ��0����255
	int i;
	for(i=0;i<1000;i++)
	{
		a[i]=-1-i;//-1  -2  -3......-128  127  126......2  1  0(0��ASCLL��ֵ��\0)
	}
	printf("%d\n",strlen(a));//strlen���ַ��������ҵ�\0ʱ����
	return 0;
}