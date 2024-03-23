#include<stdio.h>
int main()
{
	int i=4,j=10;
	int x=0;
	x=(i+4,j+4,4);
	printf("%d\n",x);
	x=i+4,j+4,4;
	printf("%d\n",x);
	printf("%d\n",x=i+4,j+4,4);
	printf("%d\n",(x=i+4,j+4,4));
	return 0;
}