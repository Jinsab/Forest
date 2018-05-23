#include <stdio.h>

int Vertical, Horizontal, i, j;
// Vertical = 가로의 크기를 저장하는 변수, Horizontal = 세로의 크기를 저장하는 변수 
char paper[101][101];
// paper = 종이의 모양을 저장하는 배열

input() // 가로와 세로의 크기를 입력받는 모듈 
{
	scanf("%d %d", &Horizontal, &Vertical); // 열, 행값 입력
}

process() // 종이의 모양을 결정하는 모듈 
{
	/* 
	i, j가 0이 아닌 1로 시작하는 이유는 행과 열에서 0행, 0열이 존재하지 않기 때문임. 
	i값은 행의 증가를 의미하며, j값은 열의 증가를 의미한다. 
	*/
	
	for(i=1; i<=Vertical; i++)
	{
		for(j=1; j<=Horizontal; j++)
		{
			// 행의 출력부분 
			if(i==1 || i==Vertical) 
			{
				if(j==1 || j==Horizontal)
				{
					paper[i][j] = '+'; // 행과 열이 겹친다면 '+'로 출력한다. 
				}
				else
				{
					paper[i][j] = '-'; // 행과 열이 겹치지 않는다면 '-'로 출력한다. 
				}
			}
			// 열의 출력부분 
			else if(j==1 || j==Horizontal) paper[i][j] = '|'; // 열, 즉 '|' 출력 
			else paper[i][j] = ' '; //종이사이에 빈공간 ' '을 출력한다. 
		}
		paper[i][j] = '\0'; // 남는 값은 NULL값으로 한다. 
	}
}

output() // paper(2차원 배열)을 출력하는 모듈 
{
	for(i=1; i<=Vertical; i++) 
	{
		for(j=1; j<=Horizontal; j++)
		{
			printf("%c", paper[i][j]); // paper는 배열 즉, 종이의 모양을 저장하는 배열. 
		}
		printf("\n"); // 열마다 띄워주는 역할 
	}
}

main()
{
	input();
	process();
	output();
	
	return 0;
}
