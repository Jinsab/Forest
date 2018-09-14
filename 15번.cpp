#include <stdio.h>

int compute(int a);
int main(void)
{
	int n[10] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
	int i, sum = 0;
	for (i=0; i<10; ++i)
	{
		sum += compute(n[i]);
	}
	printf("sum = %d \n", sum);
}

int compute(int a)
{
	return (a%3 ? 0 : a);
}
