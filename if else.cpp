#include <stdio.h>

int main()
{
	int a;
	printf("����� ���� ������? : "); 
	scanf("%d", &a);

	if(a>=90) printf("�� ���߾��!");
	else if(a>=80) printf("���߾��!");
	else if(a>=70) printf("���� �� ����غ���!");
	else if(a>=60) printf("�������� ���ƿ�!");
	else printf("�����ϼ���!");
	
	return 0;
}
