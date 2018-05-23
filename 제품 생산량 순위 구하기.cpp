#include <stdio.h>

int n, phone[2000], i;
// n = num, 회사갯수
// phone : 핸드폰 판매량이 각각 들어가는 배열
// i = 반복문에서 계산될 것
 
int sort(int c)
{
	int i, rank=1;
	
	for(i=0; i<n; i++;)
	{
		if(phone[c] < phone[i])
		{
			rank++;
		}	
	}
	return rank;
}

int input(void)
{
	scanf("%d", &n);
	
	for(i=0; i<n; i++)
	{
		scanf("%d", &phone[i]);
	}
}

int output(void)
{
	for(i=0; i<n; i++)
	{
		printf("%d\n", sort(i));
	}
}

int main(void)
{
	input();
	output();
	
	return 0;
}
