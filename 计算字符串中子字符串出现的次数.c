#include<stdio.h>
#include<string.h>
int main()
{
	int c(char* str,char* substr);
	char* str="Hello World!";
	char* substr=" ";
	int count=c(str,substr);
	printf("���ַ����ظ�������%d��\n",count);
	return 0;
}
int c(char* str,char* substr)
{
	int count=0;
	char* p=str;
	while(*p)
	{
		if(strstr(p,substr)!=NULL)
		{
			count++;
			p=strstr(p,substr);
		}
		p++;
	}
	return count;
}