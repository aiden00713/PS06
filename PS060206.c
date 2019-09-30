#include <stdio.h>
int main(void)
{
	char c,c1,c2;
	scanf("%c",&c);
	if('a'<=c && 'z'>=c)
	{
		c1=(c-'a')+'A';
		printf("%c",c1);
	}
	if('A'<=c && 'Z'>=c)
	{
		c2=(c-'A')+'a';
		printf("%c",c2);
	}
	if(c<'a' || c>'z')
	{
		if(c<'A' || c>'Z')
		printf("*");
	}
return 0;
}
