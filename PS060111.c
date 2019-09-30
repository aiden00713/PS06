#include <stdio.h>
int main(void)
{
	char c,c1,c2;
	scanf("%c%c%c",&c,&c1,&c2);
	if(c>='A' && c<='z' || c=='_')
	{
		printf("YES");
	}
	else
	{
		printf("NO");
	}
	return 0;
}
