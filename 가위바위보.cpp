#include <stdio.h>

int hyun, com, i=0, j=0;
int input(void) // 선언 단계, 데이터 입력 단계 // 데이터 계산 단계
{	
	// 선언 단계
	// 광현이가 내야 할 값, 컴퓨터가 내야 할 값, 반복문을 반복할 값을 선언해야 한다. 
	// hyun : 광현, com : 컴퓨터, i, j 
	printf("0 : 바위, 1 : 가위, 2 : 보자기\n");
	
	// 데이터 입력 단계 [ input() ]
	// 광현과, 컴퓨터의 값을 입력한다.
	// 이때, 광현과 컴퓨터의 값이 0, 1, 2가 아닐 때 반복해야 할 것이며, 정확한 값을 입력시 반복문을 탈출해야 할 것이다. 
	printf("광현이 낸 것은? : ");
	scanf("%d", &hyun);
	printf("컴퓨터가 낸 것은? : ");
	scanf("%d", &com);
}

int process1(void)
{
	input();
	
	if(hyun<0)
	{
		while(1>i)
		{
		if(hyun<0)
		{
		printf("광현 재입력 : ");
		scanf("%d", &hyun);
		}
		else if(hyun>2)
		{
		printf("광현 재입력 : ");
		scanf("%d", &hyun);
		}
		else
		{
			i++;
		}
		}
	}
	i=0;
	if(hyun>2)
	{
		while(1>i)
		{
		if(hyun<0)
		{
		printf("광현 재입력 : ");
		scanf("%d", &hyun);
		}
		else if(hyun>2)
		{
		printf("광현 재입력 : ");
		scanf("%d", &hyun);
		}
		else
		{
			i++;
		}
		}
	}
}

void process2()
{
	if(com<0)
	{
		while(1>j)
		{
		if(com<0)
		{
		printf("컴퓨터 재입력 : ");
		scanf("%d", &com);
		}
		else if(hyun>2)
		{
		printf("컴퓨터 재입력 : ");
		scanf("%d", &com);
		}
		else
		{
			j++;
		}
		}
	}
	j=0;
	if(com>2)
	{
		while(1>j)
		{
		if(com<0)
		{
		printf("컴퓨터 재입력 : ");
		scanf("%d", &com);
		}
		else if(com>2)
		{
		printf("컴퓨터 재입력 : ");
		scanf("%d", &com);
		}
		else
		{
			j++;
		}
		}
	}
}
	// 계산 부분 [ process ], 출력 부분 [ output() ]
	// 계산부분은 if로 처리하였다. 
	// 출력 부분은 printf로 처리하였다.
	 
	// 조건
	// 0은 1을 이긴다//1은 2를 이긴다//2는 0을 이긴다.
	// 자기와 같은 수는 비긴다. 
	// 0은 2에게 진다//2는 1에게 진다//1은 0에게 진다.
void output()
{
	if(hyun==0) // 현이가 주먹을 낼 경우 
	{
		if(com==0)
		{
			printf("무승부");
		}
		else if(com==1)
		{
			printf("승리");
		}
		else if(com==2)
		{
			printf("패배");
		}
	}
	else if(hyun==1) // 현이가 가위를 낼 경우 
	{
		if(com==0)
		{
			printf("패배");
		}
		else if(com==1)
		{
			printf("무승부");
		}
		else if(com==2)
		{
			printf("승리");
		}
	}
	else if(hyun==2) // 현이가 보를 낼 경우 
	{
		if(com==0)
		{
			printf("승리");
		}
		else if(com==1)
		{
			printf("패배");
		}
		else if(com==2)
		{
			printf("무승부");
		}
	}
}

int main(void)
{
	input();
	process1();
	process2();
	output();
}
