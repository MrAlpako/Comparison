#include <stdio.h>

int main()
{
	int a,b;
	printf("a=");
	scanf("%i",&a);
	printf("b=");
	scanf("%i",&b);
	if(a>b)
	{
		printf("a bolshe");
	}
	else
	{
		if(a==b)
		{
			printf("a=b");
		}
		else
		{
			printf("a men'she");
		}
	}
}
