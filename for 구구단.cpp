#include <stdio.h>

void result(int i, int j);

int main(void)
{
	int i, j;
	printf("몇단부터 출력?\n");
	scanf("%d", &i);
	printf("몇단까지 출력?\n");
	scanf("%d", &j);
	
	if(i>j)
	{
		result(j, i);
	}
	else
	{
		result(i, j);
	}
	return 0;
}
void result(int a, int b)
{
	int n;
	while(a <= b)
	{
		printf("\t%d 단\n", a);
		for(n=1; n<=9; n++)
		{
			printf("%d * %d = %d\n", a, n, a*n);
		}
		printf("---------------------------------\n");
		a++;
	}
}
