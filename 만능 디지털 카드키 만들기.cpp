#include <stdio.h>

 int x, y, z, i, gcd; // x = 비밀번호 1, y = 2, z = 3, i = 나눌값, gcd = greatest common divisor(최대공약수) 

input()
{
	scanf("%d %d %d", &x, &y, &z); // x, y, z값 입력받음 
}

process()
{
	for(i=1; i<=x; i++)
	{
		if(x%i==0 && y%i==0 && z%i==0)
		{
			gcd = i;
		}
	}
}

output()
{
	printf("%d\n", gcd);
}

main()
{
	input();
	process();
	output();
	
	return 0;
}
