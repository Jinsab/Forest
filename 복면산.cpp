#include <stdio.h>

int S, O, T;

output()
{
	printf("%d%d%d - %d%d = %d%d\n",S ,O ,T ,S ,O ,T ,T);
}

process()
{
	for(S=1; S<=9; S++)
	{
		for(O=0; O<=9; O++)
		{
			for(T=0; T<=9; T++)
			{
				if(S*100+O*10+T-(S*10+O) == T*10+T)
				{
					output();
				}
			}
		}
	}
}

main()
{
	process();	

	return 0;
}
