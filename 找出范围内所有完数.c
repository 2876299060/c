#include<stdio.h>
int main()
{
	int a,n,i,sum;
	
	printf("������һ��������:");
	scanf("%d",&a);
	printf("%d����������Ϊ:\n",a);
	for(n=1;n<=a;n++)
	{
		sum=0;
		for(i=1;i<n;i++)
		{
			if(n%i==0)
			sum+=i;
		}
		if(sum==n)
			printf("%d\n",n);
	}
	return 0;
}