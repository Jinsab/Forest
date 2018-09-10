#include <stdio.h>

int main()
{
	int i, yun = 0, year, month, day, day1 = 0, day2 = 0, special = 0, enterday, of = 0;
	int month_day[12] = { 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31 };
	
	printf("년도 : ");
	scanf("%d", &year);
	
	printf("월 : ");
	scanf("%d", &month);
	
	printf("일 : ");
	scanf("%d", &enterday);

	printf("\n");
	
	for (i = 1; i < year; i++)
	{
		if (i % 4 == 0 && !(i % 100 == 0))
		{
			special++;
		}
		else if (i % 400 == 0)
		{
			special++;
		}
	}
	day1 = 365 * (year - 1) + special;

	for (int k = 0; k < 3; ++k)
	{
		for (i = 0; i < month-1; i++)
		{
			day2 += month_day[i];
		}
		day2 += 1;

		if ((year % 4 == 0 && !(year % 100 == 0)) || (year%400==0))
		{
			yun = 1;
			
			if (month>=3)
			{
				day2 += 1; 
			}
		}
		else
		{
			yun = 0;
			day2 = day2;
		}

		day = day1 + day2;
	
		if(of == 0)
		{
			printf("%d년 %d월 %d일은 ", year, month, enterday);
			
			switch(day%7)
			{
				case 0: printf("일요일이다.\n");
					break;
				
				case 1: printf("월요일이다.\n");
					break;
					
				case 2: printf("화요일이다.\n");
					break;
					
				case 3: printf("수요일이다.\n");
					break;
					
				case 4: printf("목요일이다.\n");
					break;
					
				case 5: printf("금요일이다.\n");
					break;
					
				case 6: printf("토요일이다.\n");
					break;
					
				default:
					break;
			}
		}
		
		printf("\n\t  %d년  %d월\n", year, month);
		printf("\t==============\n");
		printf("-----------------------------\n");
		printf(" SUN MON TUE WED THU FRI SAT\n");
		printf("-----------------------------\n");
		
		for (i = 0; i < day % 7; i++)
		{
			printf("    ");
		}
		int cnt = (day % 7);

		if (yun == 1 && month==2)
		{
			for (i = 1; i <= 29; i++)
			{
				cnt++;
				printf("%4d", i);
				if (cnt % 7 == 0)
				printf("\n");
			}
		}
		else
		{
			for (i = 1; i <= month_day[month - 1]; i++)
			{
				cnt++;
				printf("%4d", i);
				if (cnt % 7 == 0)
				printf("\n");
			}
		}
		
		month ++;
		of ++;
		
		day = 0;
		day2 = 0;
		
		printf("\n");
	}
		
	return 0;
}
