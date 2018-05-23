#include <stdio.h>

int n, a, b, c, count=0;
// n은 철사의 길이
// a, b, c는 1부터 n까지 모든 가능한 경우수 
input()
{
	// 철사의 길이 입력 
	scanf("%d", &n); 
}
/*
1. 차를 수색한 경우 유탄으로 부순다.
 단, 팀원이 있는지, 밑에 아이템이 없는지 확인한다.
 
2. 집에 올때 탄을 5~6탄사이만 남기고 모두 버리도록 한다.
 단, 내각단계 이후 집에 잠시 올땐 버리지 않는다.
 
3. 쓸데없는 T(질주)를 사용하지 않고, 그 마나 비용으로 뒤 시체정리를 한다.

4. 마나가 50이하일 경우(출혈, 기생의 경우는 7~80) 유탄을 사용하지 않고 아낀다.
 특별케이스에선 무시해도 된다.
 
5. 출혈, 기생같은 경우에는 모르핀을 사용하여 버틴다.
 단, 독 출혈은 해독제를 사용하고, 기생+출혈은 붕대, 나노기기중 1택(분대장이 선택한다.)
 
6. 케이스 바이 케이스이지만, 출혈상태일 경우 13라 막바지에 먹도록한다.
 ※14라 불멸자를 유탄으로 터치기 위함을 생각할 것※
 
7. 골절같은 경우에는 발은 풀고, 팔은 풀지않는다.
 단, 분대장의 경우에는 풀도록 한다.
 
8. 5셀을 모았을 경우 한 사람이 소지하지 않고, 마나가 부족한 사람에게 돌리도록한다.
 모두 마나가 어느정도 이상이라면, 출혈, 기생상태인 사람에게 주도록 한다.
 
9. 해독제정도는 챙기도록 하며, 샷건의 사용은 최소로 사용한다.
 M29의 경우에는 사용하지 않는다.
 
10. 스킬 선마는 D(모르핀), S(경화기 숙련)이 가장 적합하며, E(유탄 발사기)는 1레벨만으로도 충분하다.
 단, 분대장과 협의하에 유탄수(E선마)가 가능하다. 
*/

/*
 역할분배
 
 분대장(전체적 지휘)
 
 탱커(필수), 서브탱커(반필수이지만, 안두는 분대장도 존재)
 
 메딕(많으면 좋음) 
 
 유탄수(분대장마다 다름)
 
 29사수(필수) 
 
 물자관리
 
 아이템은 막 던지지 말고, 분대장은 초반 핑으로 로플(조명신호탄)위치 정해주는 것이 좋다.
 수색단계에서 아이템을 모으는사람 
*/
process()
{
	// 경우의 수를 탐색 
	for(a=1; a<=n; a++)
	{
		for(b=a; b<=n; b++)
		{
			for(c=b; c<=n; c++)
			{
				if(a+b+c==n && a+b>c)
				{ 
					count++;
					printf("%d %d %d\n", a, b, c);
				}
			}
		}
	}
}

output()
{
	// count가 0이면 -1을 출력 
	if(count == 0)
	{
		printf("-1\n");
	}
}

main()
{
	input();
	process();
	output();
	
	return 0;	
}
