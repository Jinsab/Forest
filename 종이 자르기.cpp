#include <stdio.h>

int Vertical, Horizontal, i, j;
// Vertical = ������ ũ�⸦ �����ϴ� ����, Horizontal = ������ ũ�⸦ �����ϴ� ���� 
char paper[101][101];
// paper = ������ ����� �����ϴ� �迭

input() // ���ο� ������ ũ�⸦ �Է¹޴� ��� 
{
	scanf("%d %d", &Horizontal, &Vertical); // ��, �ప �Է�
}

process() // ������ ����� �����ϴ� ��� 
{
	/* 
	i, j�� 0�� �ƴ� 1�� �����ϴ� ������ ��� ������ 0��, 0���� �������� �ʱ� ������. 
	i���� ���� ������ �ǹ��ϸ�, j���� ���� ������ �ǹ��Ѵ�. 
	*/
	
	for(i=1; i<=Vertical; i++)
	{
		for(j=1; j<=Horizontal; j++)
		{
			// ���� ��ºκ� 
			if(i==1 || i==Vertical) 
			{
				if(j==1 || j==Horizontal)
				{
					paper[i][j] = '+'; // ��� ���� ��ģ�ٸ� '+'�� ����Ѵ�. 
				}
				else
				{
					paper[i][j] = '-'; // ��� ���� ��ġ�� �ʴ´ٸ� '-'�� ����Ѵ�. 
				}
			}
			// ���� ��ºκ� 
			else if(j==1 || j==Horizontal) paper[i][j] = '|'; // ��, �� '|' ��� 
			else paper[i][j] = ' '; //���̻��̿� ����� ' '�� ����Ѵ�. 
		}
		paper[i][j] = '\0'; // ���� ���� NULL������ �Ѵ�. 
	}
}

output() // paper(2���� �迭)�� ����ϴ� ��� 
{
	for(i=1; i<=Vertical; i++) 
	{
		for(j=1; j<=Horizontal; j++)
		{
			printf("%c", paper[i][j]); // paper�� �迭 ��, ������ ����� �����ϴ� �迭. 
		}
		printf("\n"); // ������ ����ִ� ���� 
	}
}

main()
{
	input();
	process();
	output();
	
	return 0;
}
