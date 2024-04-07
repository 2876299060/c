//若比较数字个数小于十，则可输入0来代替
#include<stdio.h>
int main()
{
	int i,j;
	double max;
	double arr[10]={0};
	printf("请输入正数:");
	for(j=0;j<10;j++)
	{
		scanf("%lf",&arr[j]);
	}
	for(i=1;i<10;i++)
	{
		
		if(arr[i]>arr[0])
			max=arr[i];
	}
	printf("max=%lf",max);
	return 0;
}