#include <stdio.h>

int main()
{
	int a;
	printf("당신의 시험 점수는? : "); 
	scanf("%d", &a);

	if(a>=90) printf("참 잘했어요!");
	else if(a>=80) printf("잘했어요!");
	else if(a>=70) printf("조금 더 노력해봐요!");
	else if(a>=60) printf("포기하지 말아요!");
	else printf("포기하세요!");
	
	return 0;
}
