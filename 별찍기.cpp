#include <stdio.h>

int main(void)
{	
	int i, j, sum=0, r;
	int k, o;
	
	scanf("%d", &r);
	scanf("%d", &k);
	
	for(o=0; o<=r; o++)
	{
		for(i=0; i<k; i++)
		{
			for(j; j<i+1; j++)
			{
				printf(" ");
			}
			printf("*\n");
		}
	}
		i=0;
		
	for(o=0; o<=r; o++)
	{
		for(k-=2; k>=0; k--)
		{
			for(j=0; j<=k; j++)
			{
				printf(" ");
			}
			printf("*\n");
		}
	}
	
	return 0;
}
