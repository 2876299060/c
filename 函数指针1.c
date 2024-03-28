#include<stdio.h>
Add(int x,int y)
{
	return x+y;
}
int main()
{
	int (*pa) (int x,int y)=Add;
	printf("%d\n",pa(2,3));
	printf("%d\n",Add(2,3));
	printf("%d\n",(*pa)(2,3));
	return 0;
}