#include <stdio.h>

int main()
{
	int a;
	int b=1;
	scanf("%d", &a);
	
	while(a>=b)
	{
	printf("거꾸로 출력한 값 : %d\n", a--);
	}
	return 0;
}
