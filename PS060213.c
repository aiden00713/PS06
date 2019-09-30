#include <stdio.h>
int main(void)
{
	char c,c1,c2;
	scanf("%c%d",&c,&c1);
	if(c>c1)
	{
		c2=(c*10+c1)*2;
		printf("%c",c2);
	}
	if(c<c1)
	{
		c2=(c1*10+c)*2;
		printf("%c",c2);
	}
	return 0;
}
