#include <stdio.h>
int main(void)
{
	int n,n1,n2,n3,n4;
	scanf("%d%d%d",&n,&n1,&n2);
	if(n>n1 && n>n2)
	{
		if(n1>n2)
		{
			printf("DIFF=%d",n-n2);
		}
		else
		{
			printf("DIFF=%d",n-n1);
		}
	}
	
	if(n1>n && n1>n2)
	{
		if(n>n2)
		{
			printf("DIFF=%d",n1-n2);
		}
		else
		{
			printf("DIFF=%d",n1-n);
		}
	}
	
	if(n2>n1 && n2>n)
	{
		if(n1>n)
		{
			printf("DIFF=%d",n2-n);
		}
		else
		{
			printf("DIFF=%d",n2-n1);
		}
	}
return 0;
}
