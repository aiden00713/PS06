#include <stdio.h>
int main(void)
{
	char c,c1;
	scanf("%c%c",&c,&c1);
	if('a'<=c && c<='z')
	{
		if('a'<=c1 && c1<='z')
		{
			printf("+");
		}
	}
	else
	{
		printf("?");
	}
return 0;
}
