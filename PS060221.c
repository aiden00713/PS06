#include <stdio.h>
int main(void)
{
	int n,m;
	scanf("%d",&n);
	m=n%3;
	
	if(m==0)
	{
		printf("%d",n);
	}
	else if(m==1)
	{
		printf("%d",n-1);
	}
	else if(m==2)
	{
		printf("%d",n+1);
	}
	
	return 0;
}
