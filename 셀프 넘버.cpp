#include <stdio.h>

// �����ѹ��� �ƴ� ���� ���س� ���� !�����ڸ� �̿��غ���.
// �����ѹ��� �����ڰ� ���� ���̴�.
 
int max[10001]; // int���� max�� 10000���� �����մϴ� ( 0���� �����ϱ� ���� ) 
int maxn(int i) // maxn�ȿ� �ִ� int i�� �����Ѵ�. 
{
	int num = i;
	if (i >= 10000) { num += i / 10000; i %= 10000; }
	if (i >= 1000) { num += i / 1000; i %= 1000; }
	if (i >= 100) { num += i / 100; i %= 100; }
	if (i >= 10) { num += i / 10; i %= 10; }
	return num += i;
}
int main(void)
{
	for(int i = 1; i <= 10000; i++)
	{
		max[maxn(i)] = 1;
		if (!max[i]) printf("%d\n", i);
	}
	return 0;
}

// ��ó : https://m.blog.naver.com/PostView.nhn?blogId=occidere&logNo=220814758752&proxyReferer=https%3A%2F%2Fwww.google.co.kr%2F 
