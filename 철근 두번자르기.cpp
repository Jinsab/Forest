#include <stdio.h>

int n, k, cnt, stat;

input() 
{
	scanf("%d %d", &n, &k); // n : 철근의 길이, k : 자를 값 
}

process()
{
	cnt = n/k; // cnt = n/k 즉, 철근의 갯수 
	if(cnt<10000) // 철근의 갯수가 1만개가 안된다면 
	{
		stat = 1; // 스텟 1 
	}
	else
	{
		stat = 0; // 철근의 갯수가 1만개가 넘는다면 스텟 0 
	}
}

output() 
{
	// for문 
	if(stat==1) // 1이면? 
	{ 
		for(int i=1; i<=cnt; i++) // 반복 // 
		{
			printf("F-%04d\n", i);
		}
	}
	else // 아니면 
	{
		printf("번호 초과 오류"); // 오류 
	}
}

main()
{
	input();
	process();
	output();
	
	return 0;
}
