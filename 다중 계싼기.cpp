#include <stdio.h>

int n, n1, n2, n3, i, j, *pn, num[100];

input()
{
	pn = num;
	int num[100];
	printf("���, ���, �ִ�����, �ִ��������� ����� n�� ���� : ");
	scanf("%d", &n);
	
	for(i=1; i<=n; i++)
	{
		printf("n%d�� ���� : ", i);
		scanf("%d", pn+i);
	}
	
	printf("1. ���\n2. ���\n3. �ּҰ����\n4. �ִ�����\n");
	scanf("%d", &n1);
	
	switch(n1)
	{
		case 1 : printf("����� �����ϼ̽��ϴ�.\n");
			break;
		case 2 : printf("����� �����ϼ̽��ϴ�.\n");
			break;
		case 3 : printf("�ּҰ������ �����ϼ̽��ϴ�.\n");
			break;
		case 4 : printf("�ִ������� �����ϼ̽��ϴ�.\n");
			break;
		default : while(n1) { printf("���Է� : "); scanf("%d", &n1);
			if(n1==1)
			{
				printf("����� �����ϼ̽��ϴ�.\n"); 
				break;
			}
			if(n1==2)
			{
				printf("����� �����ϼ̽��ϴ�.\n");
				break;
			}
			if(n1==3)
			{
				printf("�ּҰ������ �����ϼ̽��ϴ�.\n");
				break;
			}
			if(n1==4)
			{
				printf("�ִ������� �����ϼ̽��ϴ�.\n");
				break;
			}
		}	
	}
}

process()
{
	//��� ó������ 
	if(n1==1)
	{
		printf("����� ������? : ");
		scanf("%d", &n2);
		
		for(i=1; i<=n; i++)
		{
			n3=0;
			for(j=1; j<=n2; j++)
			{
				n3++;
				printf("%d\n", num[i]*n3);
			}
		}
	}
	//��� ó������0
	if(n1==2)
	{
		
	}
	//�ִ����� ó������
	if(n1==3)
	{
		
	}
	//�ּҰ���� ó������
	if(n1==4)
	{
		
	}
}

output()
{
	
}

main()
{
	input();
	process();
	output();
	
	return 0;
}
