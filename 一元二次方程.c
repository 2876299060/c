#include<stdio.h>
#include<math.h>
int main()
{
	float a,b,c;
	float x1,x2;
	float delt;
	printf("请输入a,b,c的值:");
	scanf("%f%f%f",&a,&b,&c);
	delt=b*b-4*a*c;
	if(a==0)
	{
		if(b==0)
		{
			printf("无解\n");
		}
		else
		{
			printf("x1=x2=%f\n",-c/b);
		}
	}
	else
	{
		if(delt==0)
		{
			printf("x1=x2=%d\n",-b/(2*a));
		}
		else if(delt>0)
		{
			printf("x1=%f,x2=%f\n",(-b+sqrt(delt))/(2*a),(-b-sqrt(delt))/(2*a));
		}
		else
		{
			printf("无解\n");
		}
	}
	return 0;
}