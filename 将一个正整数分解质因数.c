#include<stdio.h>
int main()
{
	int x,y;
	printf("������һ��������:");
	scanf("%d",&x);
	printf("%d=",x);
	for(y=2;y<=x;y++)
	{
		while(x!=y)
		{
		if(x%y==0)
		{
			printf("%d ",y);
			x=x/y;
		}
		else
		{
			break;
		}
		}

	}
	printf("%d ",x);
	return 0;
}