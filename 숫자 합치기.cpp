#include <stdio.h>

int i, n, arr[1000], *p, sum, x=1, t=0;

input()
{
	p=arr;
	
	scanf("%d", &n);
	
	for(i=1; i<=n; i++)
	{
		scanf("%d", p+i);
		t++;
	}
}

process()
{
	for(i=1; i<=n; i++)
	{
		sum += *(p+t)*x;
		x = x*10;
		t--;
	}
}

output()
{
	printf("%d", sum);
}

main()
{
	input();
	process();
	output();
	
	return 0;
}
