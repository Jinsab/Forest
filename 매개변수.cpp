#include <stdio.h>

int i, n, total=0, ary[1000];;
double res, v;
double ary_avg(int *);

int main(void)
{
	printf("�������� ������ �Է��ϼ��� : ");
	scanf("%d", &n);
	printf("\n");
	for(int i=1; i<=n; i++)
	{
		printf("������ %d��° ���� �Է��ϼ��� : ", i); 
		scanf("%d", ary+i);
	}
	res=ary_avg(ary);
	printf("\n������ ����� %.2lf �Դϴ�.\n", res);
	
	return 0;
}

double ary_avg(int *ap)
{
	
	double average;
	v = n*1.0;
	for(i=1; i<=n; i++)
	{
		total += ap[i];
	}
	average=total/v;
	
	return average;
}
