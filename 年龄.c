#include<stdio.h>

int main()
{
	int age=0;
	printf("请输入年龄:");
	scanf("%d",&age);
	if(age>0&&age<18)
	{
	
		printf("未成年\n");
}
	
	  if(age>=18&&age<28)
{
		
		printf("青年\n");
}
	 if (age>=28&&age<=50)
{
	
		printf("壮年\n");
}
	 else if(age>50)
{
		
		printf("bug\n");   
}
	return 0;
}