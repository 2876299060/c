#include<stdio.h>
#include<windows.h>
int main()
{
	unsigned int i;
	for(i=9;i>=0;i--)
	{
		printf("%u\n",i);
		Sleep(200);
	}
	return 0;
}