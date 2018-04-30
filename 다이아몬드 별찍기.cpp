#include <stdio.h>
#define abs(x) (((x) > 0) ? (x) : -(x))

int main(void)
{
		int i, j=0, k;
		scanf("%d", &k);

		k /= 2;

		for (i =- k; i<=k; i++)
		{
			for (j = 0; j<abs(i); j++)
				printf(" ");
			for (j = 0; j<(k-abs(i))*2+1; j++)
				printf("*");
			printf("\n");
		}
		return 0;
}
