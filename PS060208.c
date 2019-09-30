#include <stdio.h>
int main(void)
{
	char c,c1,c2,c3;
	scanf("%c%c%c",&c,&c1,&c2);
	if (c>c1 && c>c2)
	{
		if(c1>c2)
		{
			c3=c-c2;
			printf("%d",c3);
		}
		if(c1<c2)
		{
			c3=c-c1;
			printf("%d",c3);
		}
	}
	
	if (c1>c && c1>c2)
	{
		if(c>c2)
		{
			c3=c1-c2;
			printf("%d",c3);
		}
		if(c<c2)
		{
			c3=c1-c;
			printf("%d",c3);
		}
	}
	
	if (c2>c && c2>c1)
	{
		if(c1>c)
		{
			c3=c2-c;
			printf("%d",c3);
		}
		if(c1<c)
		{
			c3=c2-c1;
			printf("%d",c3);
		}
	}
	return 0;
} 
