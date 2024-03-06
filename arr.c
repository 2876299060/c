#include<stdio.h>
int main()
{
	int arr[10]={1,2,3,4,5,6,7,8,9,10};
	printf("%d\n",arr);
	printf("%d\n",arr+1);
	
	printf("%d\n",&arr[0]);
	printf("%d\n",&arr[0]+1);
	
	printf("%d\n",&arr);
	printf("%d\n",&arr+1);
	//&arr--&数组名，是整个数组的地址
	//sizeof(arr),sizeof(数组名)--是整个数组的大小
	//除了这两种情况arr是数组首元素
	return 0;
}