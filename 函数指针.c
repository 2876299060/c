#include<stdio.h>
void Print (char* str)
{
	printf("%s",str);
}
int main()
{
	void (* p)(char*)=Print;//Print����Ԫ�ص�ַ������浽pָ���У���*char���У���������Ϊ������*char�����ַ������ͣ���������Ϊvoid
	(*p)("Hello\n");
	return 0;
}
