#include <stdio.h>
int main(void)
{
	int n,n1,n2;
	scanf("%d",&n);
	if(n%10<=4)
	{
		n1=(n/10)*10;
	printf("%d=%d",n,n1);
    }
    if(n%10>=5)
    {
		n1=(n/10)*10+10;
	printf("%d=%d",n,n1);
    }
	return 0;
}
