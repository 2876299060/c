#include<stdio.h>
int main()
{
	char ch[5]={0};
	int arr[10]={1,2,3,4,5,6,7,8,9,10};
	printf("%d\n",arr[9]-arr[0]);
	printf("%d\n",arr[9]-ch[0]);//error
}