#include<stdio.h>
int main()
{
	int i,n,s;
	s=1;
	for(i=1;i<=9;i++)
	{
		for(n=1;n<=i;n++)
		{
			s=n*i;
			printf("%d*%d=%d  ",n,i,s);
		}
		printf("\n");
	}
	return 0;
}