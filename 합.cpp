#include <stdio.h>

int main()
{
	int i, j, k=0;
	
	printf("ó�� ������ ���� �����Ͻÿ� : ");
	scanf("%d", &i);
	
	printf("������ ���� ���ڸ� �����Ͻÿ� : ");
	scanf("%d", &j);
	
	for(i; i<=j; i++)
	{
		printf("%d ", i);
		k += i;
	}
	printf("\nó�� �����ߴ� ���� �ٽ� ���ÿ� : ");
	scanf("%d", &i);
	
	printf("\n%d���� %d������ ���� %d�Դϴ�.\n", i, j, k);
	return 0;
}
