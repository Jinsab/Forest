#include <stdio.h>

// 셀프넘버가 아닌 수를 구해낸 다음 !연산자를 이용해보자.
// 셀프넘버란 생성자가 없는 수이다.
 
int max[10001]; // int절인 max를 10000까지 선언합니다 ( 0부터 시작하기 떄문 ) 
int maxn(int i) // maxn안에 있는 int i를 선언한다. 
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

// 출처 : https://m.blog.naver.com/PostView.nhn?blogId=occidere&logNo=220814758752&proxyReferer=https%3A%2F%2Fwww.google.co.kr%2F 
