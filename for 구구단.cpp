#include <stdio.h>

void result(int i, int j);

int main(void)
{
	int i, j;
	printf("��ܺ��� ���?\n");
	scanf("%d", &i);
	printf("��ܱ��� ���?\n");
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
		printf("\t%d ��\n", a);
		for(n=1; n<=9; n++)
		{
			printf("%d * %d = %d\n", a, n, a*n);
		}
		printf("---------------------------------\n");
		a++;
	}
}
