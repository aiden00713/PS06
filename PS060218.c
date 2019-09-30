#include <stdio.h>
int main(void)
{
	int n,n1,n2,n3,n4,n5,n6;
	char c;
	scanf("%c",&c);
	if(c>='1' && '9'>=c)
	{
		n=c%2;
		n1=c/2;
		n2=n1%2;
		n3=n1/2;
		n4=n3%2;
		n5=n3/2;
		n6=n5%2;
		printf("%d%d%d%d",n6,n4,n2,n);
	}
	if(c=='A')
	{
		printf("1010");
	}
	if(c=='B')
	{
		printf("1011");
	}
	if(c=='C')
	{
		printf("1100");
	}
	if(c=='D')
	{
		printf("1101");
	}
	if(c=='E')
	{
		printf("1110");
	}
	if(c=='F')
	{
		printf("1111");
	}
	return 0;
}
