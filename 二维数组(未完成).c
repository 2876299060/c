#include<stdio.h>
int main()
{
	int arr[3][4]={{1,2,3,4},{3,4,5,6},{9,8,7,6}};
	int x,y;
	for(x=0;x<4;x++)
	{
		for(y=0;y<5;y++)
		{
			printf("%d",arr[x][y]);
		}
		printf("\n");
	}
	return 0;
}