#include <stdio.h>

int main(void)
{
	int a, b, c;
	scanf("%d %d %d", &a, &b, &c);
	
	if(170<a)
	{
		if(170<b)
		{
			if(170<c)
			{
				printf("pass");
			}
			else
			{
				printf("CRASH %d", c);
			}
		}
		else
		{
			printf("CRASH %d", b);
		}
	}
	else
	{
		printf("CRASH %d", a);
	}
	
	return 0;
}
