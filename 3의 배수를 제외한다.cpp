#include <stdio.h>

int n;

input()
{
	scanf("%d", &n);	
}

processoutput()
{
	for(int i=0; i<n; i++)
	{
		if(i%3!=0)
		{
			printf("%d\n", i);
		}
	}
}

int main(void)
{
	input();
	processoutput();
	
	return 0;
}
