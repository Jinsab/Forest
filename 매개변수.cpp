#include <stdio.h>

int i, n, total=0, ary[1000];;
double res, v;
double ary_avg(int *);

int main(void)
{
	printf("교과목의 갯수를 입력하세요 : ");
	scanf("%d", &n);
	printf("\n");
	for(int i=1; i<=n; i++)
	{
		printf("교과목 %d번째 값을 입력하세요 : ", i); 
		scanf("%d", ary+i);
	}
	res=ary_avg(ary);
	printf("\n시험의 평균은 %.2lf 입니다.\n", res);
	
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
