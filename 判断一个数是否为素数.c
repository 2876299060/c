#include<stdio.h>
int main()
{
	int a,b;
	printf("������һ��������:");
	scanf("%d",&a);
	for(b=2;b<a;b++)
	{
		if(a%b==0)
			break;
	}
	if(b==a)
		printf("%d������\n",a);
	else
		printf("%d��������\n",a);
	return 0;
}