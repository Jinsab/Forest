#include <stdio.h>
 
int main(void)
{	
	int number, t, o, i, j, cycle, add=0, count=0; // int���� number, i, j, cycle, add, count�� �����մϴ�. 
	
	scanf("%d", &number); // number�� ���� �Է��մϴ�. 
	add = number; // add�� ���� number�� �����ݴϴ�. 
	
	for(i=0; j != number; i++) // i�� ���� 0���� �����ϰ�, i�� ���� 5���� ũ��, i�� ���� 1�� ������ŵ�ϴ�. 
	{
	t = add / 10; // t(�����ڸ� ��)�� ���� add / 10���� �����ݴϴ�.
	o = add - t*10; // o(�����ڸ� ��)�� ���� add - t*10���� �����ݴϴ�. 
	cycle = t+o; // cycle�� ���� t(�����ڸ� ��)+o(���� �ڸ���)�� �����ݴϴ�. 
	
	// ���� : cycle�� ���� 10*n�� �Ѵ´ٸ� cycle���� cycle-10*n��ŭ ���ݴϴ�. 
	while(cycle>=10) // cycle�� ���� 10�� �Ѵ´ٸ�? 
	{
	cycle -= 10; // cycle�� ���� -10�� ���ݴϴ�. 
	}
	add = o*10+cycle; // o(�����ڸ� ��)�� ���� 10�� ���� ���� cycle(���� ��)���� �����ݴϴ�. 
	j = add; // j�� ���� add�� ���մϴ�. 
	count += 1; // count�� ���� 1�� ���մϴ�. 
	
	if(add!=number) // add�� number�� ���� �ٸ�����? 
	{
	printf("%d\n", add); // add�� ���� ����մϴ�. [test 1]
	}
	else
	{
		printf("%d\n", add); // add�� ���� ����մϴ�. [test 2]
		printf("%d\n", count); // count�� ���� ����մϴ�. 
	}
	}
	return 0;
}
