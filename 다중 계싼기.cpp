#include <stdio.h>

int n, n1, n2, n3, i, j, *pn, num[100];

input()
{
	pn = num;
	int num[100];
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
			for(j=1; j<=n2; j++)
			{
				n3++;
				printf("%d\n", num[i]*n3);
			}
		}
	}
	//약수 처리과정0
	if(n1==2)
	{
		
	}
	//최대공배수 처리과정
	if(n1==3)
	{
		
	}
	//최소공약수 처리과정
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
