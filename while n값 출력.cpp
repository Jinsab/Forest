#include <stdio.h>

int main()
{
	int a;
	int b;
	printf("���� �������ּ��� : ");
	scanf("%d", &a);
	printf("ù��° ������ ���� ���� �������ּ��� : ");
	scanf("%d", &b);
	while(a>=b)
	{
	printf("%d\n", b++);
	}
	while(a+1<b)
	{
	printf("����");
	b=+a;	
	} 
	return 0;
}
