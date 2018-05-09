#include <stdio.h>

int main(void)
{
	int n, k, s=0, res;
	scanf("%d %d", &n, &k);
	
	res = n/k;
	
	if(res<10000)
	{
		for(int i=5; i<n; n=n-k)
		{
			s++;
			printf("F-%04d\n", s);
		}
	}
	else
	{
		printf("번호 초과 오류");
	}
	return 0;
}
