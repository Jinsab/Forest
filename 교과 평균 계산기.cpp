#include <Stdio.h>

int *ap, arr[1000], n, i, total;
char *ary[15][100];
double average, v;
	
int main(void)
{
	ap = arr;
	
	printf("교과목의 갯수 : ");
	scanf("%d", &n);
	printf("\n");
	
	for(i=1; i<=n; i++) // 교과목 이름, 점수 입력 
	{
		printf("교과목의 이름 (%d번째) : ", i);
		scanf("%s", ary+i);
		printf("%s의 점수 : ", ary[i]);
		scanf("%d", ap+i);
		printf("\n");
	}
	
	v = float(n);
	for(i=1; i<=n; i++) // 교과목 평균 계산 
	{
		total += *(ap+i);
	}
	average=total/v;
	
	printf("%.2lf", average);
} 
