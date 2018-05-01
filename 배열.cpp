#include <stdio.h>
int main(void)
{
	int score[10] = {95, 100, 98, 78, 65, 55, 78, 52, 97, 98};
	int i;
	 
	while (i<10)
	{
		printf("%d ", score[i]);
		i++;
	}
	
	printf("\n\n\n");
	
	for(i=0; i<10; i++)
	{
		printf("%d ", score[i]);
	}
	return 0;
}
