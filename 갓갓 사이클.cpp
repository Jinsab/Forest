#include <stdio.h>
 
int main(void)
{	
	int number, t, o, i, j, cycle, add=0, count=0; // int절인 number, i, j, cycle, add, count을 선언합니다. 
	
	scanf("%d", &number); // number의 값을 입력합니다. 
	add = number; // add의 값을 number로 정해줍니다. 
	
	for(i=0; j != number; i++) // i의 값을 0으로 지정하고, i의 값이 5보다 크면, i의 값을 1을 증가시킵니다. 
	{
	t = add / 10; // t(십의자리 수)의 값을 add / 10으로 정해줍니다.
	o = add - t*10; // o(일의자리 수)의 값을 add - t*10으로 정해줍니다. 
	cycle = t+o; // cycle의 값을 t(십의자리 수)+o(일의 자리수)로 정해줍니다. 
	
	// 조건 : cycle의 값이 10*n을 넘는다면 cycle값을 cycle-10*n만큼 해줍니다. 
	while(cycle>=10) // cycle의 값이 10을 넘는다면? 
	{
	cycle -= 10; // cycle의 값에 -10을 해줍니다. 
	}
	add = o*10+cycle; // o(일의자리 수)의 값에 10을 곱한 값에 cycle(다음 값)으로 더해줍니다. 
	j = add; // j의 값을 add로 정합니다. 
	count += 1; // count의 값에 1을 더합니다. 
	
	if(add!=number) // add와 number의 값이 다른가요? 
	{
	printf("%d\n", add); // add의 값을 출력합니다. [test 1]
	}
	else
	{
		printf("%d\n", add); // add의 값을 출력합니다. [test 2]
		printf("%d\n", count); // count의 값을 출력합니다. 
	}
	}
	return 0;
}
