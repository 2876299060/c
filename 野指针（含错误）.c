#include<stdio.h>
int* test()
{
	int a=10;//a属于局部变量，出了局部函数会被销毁，再也找不到a
	return &a;
}
int main()
{
	int* p=test();//a已经被销毁，找不到a，此处无法赋值

	*p=20;
	return 0;
}