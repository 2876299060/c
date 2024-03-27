#include<stdio.h>
void Print (char* str)
{
	printf("%s",str);
}
int main()
{
	void (* p)(char*)=Print;//Print是首元素地址，将其存到p指针中，（*char）中（）代表其为函数，*char代表字符串类型，返回类型为void
	(*p)("Hello\n");
	return 0;
}
