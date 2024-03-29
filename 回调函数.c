//没有直接将函数名打出来调用函数，而是通过指针调用了函数
#include<stdio.h>
void print(char* str)
{
	printf("hello:%s\n",str);
}
void test(void (*p)(char*))
{
	printf("test\n");
	p("world");//调用了print函数
}
int main()
{
	test(print);
	return 0;
}