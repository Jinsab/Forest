#include <stdio.h>

int n, k, cnt, stat;

input() 
{
	scanf("%d %d", &n, &k); // n : ö���� ����, k : �ڸ� �� 
}

process()
{
	cnt = n/k; // cnt = n/k ��, ö���� ���� 
	if(cnt<10000) // ö���� ������ 1������ �ȵȴٸ� 
	{
		stat = 1; // ���� 1 
	}
	else
	{
		stat = 0; // ö���� ������ 1������ �Ѵ´ٸ� ���� 0 
	}
}

output() 
{
	// for�� 
	if(stat==1) // 1�̸�? 
	{ 
		for(int i=1; i<=cnt; i++) // �ݺ� // 
		{
			printf("F-%04d\n", i);
		}
	}
	else // �ƴϸ� 
	{
		printf("��ȣ �ʰ� ����"); // ���� 
	}
}

main()
{
	input();
	process();
	output();
	
	return 0;
}
