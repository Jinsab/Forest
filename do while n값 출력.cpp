#include <stdio.h>

int main()
{
	int a;
	int b=1;
	scanf("%d", &a);
	do
	{
	printf("%d\n", b);
	b++;
	}
	while(a>=b);
	return 0;
}


