#include <stdio.h>

int f(int a, int b, int c, int d)
{
	int sum;
	int sum = a+b+c+d;
	
	return a+b+c+d;
} 

int main(void)
{
	int a, b, c, d;
	
	scanf("%d %d %d %d", &a, &b, &c, &d);
	
	switch(f(a, b, c, d))
	{
		case 1 : printf("��");
				break;
				 
		case 2 : printf("��");
				break;
				
		case 3 : printf("��");
				break;
				
		case 4 : printf("��");
				break;
				
		default : printf("��");
				break;
	}
	return 0;
}
