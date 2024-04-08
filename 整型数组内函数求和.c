#include<stdio.h>
int array_sum(int *data,int n);
int main()
{
	int sum=0;
	int a[]={1,2,3,4,5,6,7,8};

	sum=array_sum(a,sizeof(a)/sizeof(int));
	printf("%d\n",sum);
	return 0;
}
array_sum(int *data,int n)
{
	int ret=0;
	int i;
	for(i=0;i<n;i++)
	{
		ret+=data[i];
	}
	return ret;
}