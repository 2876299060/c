//û��ֱ�ӽ���������������ú���������ͨ��ָ������˺���
#include<stdio.h>
void print(char* str)
{
	printf("hello:%s\n",str);
}
void test(void (*p)(char*))
{
	printf("test\n");
	p("world");//������print����
}
int main()
{
	test(print);
	return 0;
}