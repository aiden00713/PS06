#include <stdio.h>
int main(void)
{
	char c,c1;
	scanf("%c%c",&c,&c1);
	if (c>='A' && c<='Z' || c>='a' && c<='z' || c=='_')
	{
		if (c1>='A' && c1<='Z' || c1>='a' && c1<='z' || c1>='1' && c1<='9')
		{
			printf("Yes");
		}
    }
    
	else
	{
		printf("No");
	}
	return 0;
}
