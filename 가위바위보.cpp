#include <stdio.h>

int hyun, com, i=0, j=0;
int input(void) // ���� �ܰ�, ������ �Է� �ܰ� // ������ ��� �ܰ�
{	
	// ���� �ܰ�
	// �����̰� ���� �� ��, ��ǻ�Ͱ� ���� �� ��, �ݺ����� �ݺ��� ���� �����ؾ� �Ѵ�. 
	// hyun : ����, com : ��ǻ��, i, j 
	printf("0 : ����, 1 : ����, 2 : ���ڱ�\n");
	
	// ������ �Է� �ܰ� [ input() ]
	// ������, ��ǻ���� ���� �Է��Ѵ�.
	// �̶�, ������ ��ǻ���� ���� 0, 1, 2�� �ƴ� �� �ݺ��ؾ� �� ���̸�, ��Ȯ�� ���� �Է½� �ݺ����� Ż���ؾ� �� ���̴�. 
	printf("������ �� ����? : ");
	scanf("%d", &hyun);
	printf("��ǻ�Ͱ� �� ����? : ");
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
		printf("���� ���Է� : ");
		scanf("%d", &hyun);
		}
		else if(hyun>2)
		{
		printf("���� ���Է� : ");
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
		printf("���� ���Է� : ");
		scanf("%d", &hyun);
		}
		else if(hyun>2)
		{
		printf("���� ���Է� : ");
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
		printf("��ǻ�� ���Է� : ");
		scanf("%d", &com);
		}
		else if(hyun>2)
		{
		printf("��ǻ�� ���Է� : ");
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
		printf("��ǻ�� ���Է� : ");
		scanf("%d", &com);
		}
		else if(com>2)
		{
		printf("��ǻ�� ���Է� : ");
		scanf("%d", &com);
		}
		else
		{
			j++;
		}
		}
	}
}
	// ��� �κ� [ process ], ��� �κ� [ output() ]
	// ���κ��� if�� ó���Ͽ���. 
	// ��� �κ��� printf�� ó���Ͽ���.
	 
	// ����
	// 0�� 1�� �̱��//1�� 2�� �̱��//2�� 0�� �̱��.
	// �ڱ�� ���� ���� ����. 
	// 0�� 2���� ����//2�� 1���� ����//1�� 0���� ����.
void output()
{
	if(hyun==0) // ���̰� �ָ��� �� ��� 
	{
		if(com==0)
		{
			printf("���º�");
		}
		else if(com==1)
		{
			printf("�¸�");
		}
		else if(com==2)
		{
			printf("�й�");
		}
	}
	else if(hyun==1) // ���̰� ������ �� ��� 
	{
		if(com==0)
		{
			printf("�й�");
		}
		else if(com==1)
		{
			printf("���º�");
		}
		else if(com==2)
		{
			printf("�¸�");
		}
	}
	else if(hyun==2) // ���̰� ���� �� ��� 
	{
		if(com==0)
		{
			printf("�¸�");
		}
		else if(com==1)
		{
			printf("�й�");
		}
		else if(com==2)
		{
			printf("���º�");
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
