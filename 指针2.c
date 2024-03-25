#include<stdio.h>
int main()
{
	char arr1[]="abcdef";
	char arr2[]="abcdef";
	char* p1="abcdef";
	char* p2="abcdef";
	if(arr1==arr2)
	{
		printf("arr1=arr2\n");
	}
	else
	{
		printf("arr!=arr2\n");

	}
	if(p1=p2)
	{
		printf("p1=p2\n");
	}
	else
	{
		printf("p1!=p2\n");
	}
	return 0;
}