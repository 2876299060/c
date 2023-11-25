#include<stdio.h>
#include<stdlib.h>
int main()
{
	int num[100]={0};
	int i;
	while(1)
	{
		for(i=0;i<100;i++)
		   {if (num[i]>10)
		       { printf("%s",num[i]%2?"嘿嘿":"要天天开心哦！");
		}   else printf("");
		    if(num[i]--<0)
		       num[i]=rand()%20;
	}
	     system("color 2     ");
	printf("\n");
		
		   		
	}
}