#include <stdio.h>

 int x, y, z, i, gcd; // x = ��й�ȣ 1, y = 2, z = 3, i = ������, gcd = greatest common divisor(�ִ�����) 

input()
{
	scanf("%d %d %d", &x, &y, &z); // x, y, z�� �Է¹��� 
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
