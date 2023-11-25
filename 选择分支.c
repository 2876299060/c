#include <stdio.h>
int main()
{
	int input=0;
	printf("上大学后你要好好学习吗?(1/0)>:");
	scanf("%d",&input);
	if(input==0)
	  printf("得到好offer\n");
	else
	  printf("回家烤红薯\n");
	return 0;
}