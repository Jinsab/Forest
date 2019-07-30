/*
#include <string>
#include <vector>
#include <iostream>
#include <queue>
#include <functional>

using namespace std;

priority_queue<int, vector<int>, less<int>> temp;

int solution(int stock, vector<int> dates, vector<int> supplies, int k) {
	int answer = 0, cnt = 0;

	for (int i = 0; i < k; i++) {
		if (dates[cnt] == i) {
			temp.push(supplies[cnt]);

			if (cnt != supplies.size() - 1)
				cnt++;
		}

		if (stock == 0) {
			stock += temp.top();
			temp.pop();
			answer++;
		}

		stock--;
	}

	return answer;
}
*/
/*
n일 차에(dates)에 추가적으로 들어올 공급이 있다면 우선순위 큐를 이용해서 담아낸다.
우선순위 큐의 구조는 공급하는 양이 가장 많은 순으로 해야 stock이 부족할 때 가장 많이 받아야 최소한으로 공급받을 수 있기 때문이다.
c++에서 우선순위 큐는 priority_queue이고 템플릿 구조는 <내용 구조, 큐 구조, 정렬> 이렇게 되어있다. 
나는 supplies를 담기 때문에 내용구조는 int이고 supplies의 구조는 배열이기 때문에 큐 구조를 vector<int>로 하고 정렬은 큰 순이 less<int>로 했다.
*/