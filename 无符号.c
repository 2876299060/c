#include<stdio.h>
int main()
{
	unsigned char i=0;//范围0——255
	for(i=0;i<=255;i++)//当i=255时，i+1=0.所以出现死循环
	{
		printf("Hello World!\n");
	}
	return 0;
}