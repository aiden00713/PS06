#include <stdio.h>  
int main(void) 
{
	char c,c1;
	scanf("%c",&c);
	if(c>='1' && c<='9')
	{
		printf("+");
	}
	else
	{
		printf("?");
	}
	return 0;
}
