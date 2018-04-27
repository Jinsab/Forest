#include <stdio.h>

int main(void)
{
	int a, b;
	scanf("%d %d", &a, &b);
	printf("책의 가격은 %d입니다.\n", b);
	printf("가지고 계신 금액은? : %d \n", a);
	
	if(a>=b)
	{
		printf("책을 구입했습니다.\n");
		printf("남은 금액 : %d", a-b);
	}
	else
	{
		printf("잔액이 부족합니다.");
	}
	return 0;
}
