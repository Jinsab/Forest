#include <stdio.h>

int main()
{
	int i, j, k=0;
	
	printf("처음 시작할 수를 지정하시오 : ");
	scanf("%d", &i);
	
	printf("마지막 끝낼 숫자를 지정하시오 : ");
	scanf("%d", &j);
	
	for(i; i<=j; i++)
	{
		printf("%d ", i);
		k += i;
	}
	printf("\n처음 시작했던 수를 다시 쓰시오 : ");
	scanf("%d", &i);
	
	printf("\n%d부터 %d까지의 합은 %d입니다.\n", i, j, k);
	return 0;
}
