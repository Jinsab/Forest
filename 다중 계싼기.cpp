#include <stdio.h>

int n, n1, n2, n3, i, j, k, sum, *pn, num[100];

input()
{
	pn = num;
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
			printf("%d�� ���\n", num[i]);
			for(j=1; j<=n2; j++)
			{
				n3++;
				printf("%d\n", num[i]*n3);
			}
			printf("\n");
		}
	}
	//��� ó������
	if(n1==2)
	{
		for(i=1; i<=num[i]; i++)
		{
			printf("%d�� ���\n", num[i]);
			for(j=1; j<=num[i]; j++)
			{
				if(num[i]%j==0)
				{
					printf("%d\n", j);
				}
			}
			printf("\n");
		}
	}
	//�ּҰ���� ó������
	if(n1==3)
	{
		if(n==1)
		{
			sum = num[n];
		}
		
		if(n==2)
		{
			for(i=1; i<=1000; i++)
			{
			}	
		}
		printf("�ּҰ���� : %d", sum);
	}
	
	//�ִ����� ó������
	if(n1==4)
	{
		if(n==1)
		{
			sum = num[n];
		}
		
		if(n==2)
		{
			for(i=1; i<=1000; i++)
			{
				if(num[n]%i==0&&num[n-1]%i==0)
				{
					sum = i;
				}
			}
			printf("�ִ����� : %d", sum);
		}
		
		if(n==3)
		{
			for(i=1; i<=1000; i++)
			{
				if(num[n]%i==0&&num[n-1]%i==0&&num[n-2]%i==0)
				{
					sum = i;
				}
			}
			printf("�ִ����� : %d", sum);
		}
		
		if(n==4)
		{
			for(i=1; i<=1000; i++)
			{
				if(num[n]%i==0&&num[n-1]%i==0&&num[n-2]%i==0&&num[n-3]%i==0)
				{
					sum = i;
				}
			}
			printf("�ִ����� : %d", sum);
		}
		
		if(n==5)
		{
			for(i=1; i<=1000; i++)
			{
				if(num[n]%i==0&&num[n-1]%i==0&&num[n-2]%i==0&&num[n-3]%i==0&&num[n-4]%i==0)
				{
					sum = i;
				}
			}
			printf("�ִ����� : %d", sum);
		}
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
