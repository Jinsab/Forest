#include <Stdio.h>

int *ap, arr[1000], n, i, total;
char *ary[15][100];
double average, v;
	
int main(void)
{
	ap = arr;
	
	printf("�������� ���� : ");
	scanf("%d", &n);
	printf("\n");
	
	for(i=1; i<=n; i++) // ������ �̸�, ���� �Է� 
	{
		printf("�������� �̸� (%d��°) : ", i);
		scanf("%s", ary+i);
		printf("%s�� ���� : ", ary[i]);
		scanf("%d", ap+i);
		printf("\n");
	}
	
	v = float(n);
	for(i=1; i<=n; i++) // ������ ��� ��� 
	{
		total += *(ap+i);
	}
	average=total/v;
	
	printf("%.2lf", average);
} 
