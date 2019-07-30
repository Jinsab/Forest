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
n�� ����(dates)�� �߰������� ���� ������ �ִٸ� �켱���� ť�� �̿��ؼ� ��Ƴ���.
�켱���� ť�� ������ �����ϴ� ���� ���� ���� ������ �ؾ� stock�� ������ �� ���� ���� �޾ƾ� �ּ������� ���޹��� �� �ֱ� �����̴�.
c++���� �켱���� ť�� priority_queue�̰� ���ø� ������ <���� ����, ť ����, ����> �̷��� �Ǿ��ִ�. 
���� supplies�� ��� ������ ���뱸���� int�̰� supplies�� ������ �迭�̱� ������ ť ������ vector<int>�� �ϰ� ������ ū ���� less<int>�� �ߴ�.
*/