#include <stdio.h>

long long int n, res;

input()
{ +-
	scanf("%11ld", &n);
}

process()
{
	while(n)
	{
		res += n%10;
		n = n/10;
	}
}

output()
{
	if(res%7==4)
	{
		printf("Bad");
	}
	else
	{
		printf("Good");
	}
}

main()
{
	input();
	process();
	output();
	
	return 0;
}
