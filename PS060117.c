#include <stdio.h>
int main(void)
{
	char c,c1;
	scanf("%c",&c);
	if(c>='1' && c<='9')
	{
	  printf("%c",c);
	}

	if(c>='A' && c<='F')
	{
		c1=c-'A'+10;
		printf("%d",c1);
    }
	return 0;
}
