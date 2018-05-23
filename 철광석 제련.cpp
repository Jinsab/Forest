#include <stdio.h>

int value[5][5], max=0;

int f(int a, int b)
{
	int sum=0;
	
	for(int i=a; i<a+3; i++)
	{
		for(int j=b; j<b+3; j++)
		{
			sum+=value[i][j];
		}
	}
	return sum;
}

input()
{
	for(int i=0; i<5; i++)
	{
		for(int j=0; j<5; j++)
		{
			scanf("%d", &value[i][j]);
		}
	}
}

process()
{
	for(int i=0; i<3; i++)
	{
		for(int j=0; j<3; j++)
		{
			if(max < f(i,j))
			{
				max = f(i,j);
			}
		}
	}
}

output()
{
	printf("%d\n", max);
}

main()
{
	input();
	process();
	output();
	
	return 0;
}
