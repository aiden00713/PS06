#include <stdio.h>
int main(void)
{
	char c,c1,c2;
	scanf("%c%c%c",&c,&c1,&c2);
	if (c>c1 && c>c2)
	{
		if(c1>c2)
		{
			printf("%c%c%c",c,c1,c2);
		}
		if(c1<c2)
		{
			printf("%c%c%c",c,c2,c1);
		}
	}
	
	if (c1>c && c1>c2)
	{
		if(c>c2)
		{
			printf("%c%c%c",c1,c,c2);
		}
		if(c<c2)
		{
			printf("%c%c%c",c1,c2,c);
		}
	}
	
	if (c2>c && c2>c1)
	{
		if(c>c1)
		{
			printf("%c%c%c",c2,c,c1);
		}
		if(c<c1)
		{
			printf("%c%c%c",c2,c1,c);
		}
	}
	
	return 0;
}
