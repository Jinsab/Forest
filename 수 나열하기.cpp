#include <stdio.h>

int main(void)
{
	int a, m, d, n;
	scanf("%d %d %d %d", &a, &m, &d, &n);
	
	for(int i=1; i<n; i++)
	{
		a=a*m+d;
	}
	printf("%d", a);
	
	return 0;
}
