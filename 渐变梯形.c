#include<stdio.h>
#include<stream.h>
int main()
{
	char arr1[]="welcome to Shandong!!!!!";
	char arr2[]="########################";
	int left =0;
	int sz=sizeof(arr1)/sizeof(arr1[0]);
	int right=sz-2;
	while(left<=right){
		arr2[left]=arr1[left];
		arr2[right]=arr1[right];
	
	printf("%s\n",arr2);
	Sleep(1000)
	left++;
	right--;}
	return 0;
}