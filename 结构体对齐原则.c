//结构体对齐原则：大字节对齐（除数组外）
//变量名先后顺序不一样，结果不一样
#include<stdio.h>
struct student
{
	char sno[10];
	char sname[30];
	int age;//int为4个字节
	double height;//double为8个字节
	char gender;//char为1个字节
};
int main()
{
	struct student stu;
	printf("%d,%d\n",sizeof(struct student),sizeof(stu));
	return 0; 
}