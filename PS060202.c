#include <stdio.h>
int main(void)
{
	int n,n1,n2,n3;
	scanf("%d%d%d",&n,&n1,&n2);
	if(n<n1 && n<n2)
	{
		printf("%d",n);
	}
	if(n1<n && n1<n2)
	{
		printf("%d",n1);
	}
	if(n2<n1 && n2<n)
	{
		printf("%d",n2);
	}
	
	return 0;
}

