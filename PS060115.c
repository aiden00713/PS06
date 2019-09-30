#include <stdio.h>
int main(void)
{
	int n,n1;
	char c='A';
	scanf("%d",&n);
	if(n>=1 && n<=9)
	{
		printf("%d=%d",n,n);
	}
	else
	{
		n1=n%10;
		printf("%d=%c",n,c+n1);
	}
	return 0;
}
