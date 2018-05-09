#include <stdio.h>

int main()
{
	int a;
	int b;
	printf("값을 지정해주세요 : ");
	scanf("%d", &a);
	printf("첫번째 값보다 작은 값을 지정해주세요 : ");
	scanf("%d", &b);
	while(a>=b)
	{
	printf("%d\n", b++);
	}
	while(a+1<b)
	{
	printf("오류");
	b=+a;	
	} 
	return 0;
}
