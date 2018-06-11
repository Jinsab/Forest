#include <stdio.h>

int n, n1, n2, n3, i, j, k, sum, *pn, num[100];

input()
{
	pn = num;
	printf("배수, 약수, 최대공약수, 최대공배수에서 사용할 n의 개수 : ");
	scanf("%d", &n);
	
	for(i=1; i<=n; i++)
	{
		printf("n%d의 숫자 : ", i);
		scanf("%d", pn+i);
	}
	
	printf("1. 배수\n2. 약수\n3. 최소공배수\n4. 최대공약수\n");
	scanf("%d", &n1);
	
	switch(n1)
	{
		case 1 : printf("배수를 선택하셨습니다.\n");
			break;
		case 2 : printf("약수를 선택하셨습니다.\n");
			break;
		case 3 : printf("최소공배수를 선택하셨습니다.\n");
			break;
		case 4 : printf("최대공약수를 선택하셨습니다.\n");
			break;
		default : while(n1) { printf("재입력 : "); scanf("%d", &n1);
			if(n1==1)
			{
				printf("배수를 선택하셨습니다.\n"); 
				break;
			}
			if(n1==2)
			{
				printf("약수를 선택하셨습니다.\n");
				break;
			}
			if(n1==3)
			{
				printf("최소공배수를 선택하셨습니다.\n");
				break;
			}
			if(n1==4)
			{
				printf("최대공약수를 선택하셨습니다.\n");
				break;
			}
		}	
	}
}

process()
{
	
	//배수 처리과정 
	if(n1==1)
	{
		printf("배수의 갯수는? : ");
		scanf("%d", &n2);
		
		for(i=1; i<=n; i++)
		{
			n3=0;
			printf("%d의 배수\n", num[i]);
			for(j=1; j<=n2; j++)
			{
				n3++;
				printf("%d\n", num[i]*n3);
			}
			printf("\n");
		}
	}
	//약수 처리과정
	if(n1==2)
	{
		for(i=1; i<=num[i]; i++)
		{
			printf("%d의 약수\n", num[i]);
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
	//최소공배수 처리과정
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
		printf("최소공배수 : %d", sum);
	}
	
	//최대공약수 처리과정
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
			printf("최대공약수 : %d", sum);
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
			printf("최대공약수 : %d", sum);
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
			printf("최대공약수 : %d", sum);
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
			printf("최대공약수 : %d", sum);
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
