#include <stdio.h>
int m, i, j, k, number, df, one=0, two=0, total=0;
int numbers[101][101];

int Earth() 
{
	scanf("%d", &number);
	
	for(i = 1; i <= number; i++) 
	{
		for(j = 1; j <= number; j++) 
		{
			scanf("%d", &numbers[i][j]);
		}
	}
}

int DeathFlower() 
{
	scanf("%d", &df);
	
	for(m = 0; m < df; m++)
	{
		scanf("%d %d", &one, &two);
		for(i=0; i<df; i++)
		{
			for(j=-1; j<2; j++)
			{
				for(k=-1; k<2; k++)
				{
					numbers[one+j][two+k] = numbers[0][0];			
				}
			}
		}
	}
}

int Process() 
{
	for(i = 1; i <= number; i++)
	{
		for(j = 1; j <= number; j++)
		{
			total += numbers[i][j];
		}
	}
	
	printf("%d", total);
}

int main() {
	Earth();
	DeathFlower();
	Process();
	
	return 0;
}
