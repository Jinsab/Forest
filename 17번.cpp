#include <stdio.h>

int main()
{
	int *p1, *p2, *p3;
	int arr[5] = {10, 20, 30, 40, 50};
	
	p1 = arr;
	p2 = &arr[1];
	p3 = p1 + 3;
	
	printf("(1) %d", *p1 + *p2 + *p3);
	printf("(2) %d", p3 - p2);
	printf("(3) %d", *++p1);
	printf("(4) %d", *p1++);
	printf("(5) %d", (*p1)++);
	printf("(6) %d", *(arr+2));
	
	return 0;
}
