//�ṹ�����ԭ�򣺴��ֽڶ��루�������⣩
//�������Ⱥ�˳��һ���������һ��
#include<stdio.h>
struct student
{
	char sno[10];
	char sname[30];
	int age;//intΪ4���ֽ�
	double height;//doubleΪ8���ֽ�
	char gender;//charΪ1���ֽ�
};
int main()
{
	struct student stu;
	printf("%d,%d\n",sizeof(struct student),sizeof(stu));
	return 0; 
}