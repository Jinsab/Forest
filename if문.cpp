#include <stdio.h>

int main(void)
{
	int a, b;
	scanf("%d %d", &a, &b);
	printf("å�� ������ %d�Դϴ�.\n", b);
	printf("������ ��� �ݾ���? : %d \n", a);
	
	if(a>=b)
	{
		printf("å�� �����߽��ϴ�.\n");
		printf("���� �ݾ� : %d", a-b);
	}
	else
	{
		printf("�ܾ��� �����մϴ�.");
	}
	return 0;
}
