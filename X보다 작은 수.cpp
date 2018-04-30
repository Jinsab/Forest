#include <stdio.h>

int main(void)
{
	int n, x=0, max, sum, num[1000] = {0, };
	scanf("%d", &n);
	
	for(int i=0; i<n; i++)
	{
		scanf("%d", &num);
		sum += x[num];
		
	}
	printf("%.02lf", float(sum));
	return 0;
} 
