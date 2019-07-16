#include <string>
#include <vector>
#include <queue>
#include <iostream>

using namespace std;

int solution(vector<int> priorities, int location) {
	int answer = 0;
	queue<pair<int, int>> que;
	priority_queue<int> priQue;

	for (int i = 0; i < priorities.size(); i++) {
		que.push(make_pair(i, priorities[i]));
		priQue.push(priorities[i]);
	}

	while (!que.empty()) {
		if (que.front().second == priQue.top()) {
			if (que.front().first == location) {
				return answer + 1;
			}
			else {
				answer++;
				que.pop();
				priQue.pop();
			}
		}
		else {
			que.push(que.front());
			que.pop();
		}
	}

	return answer;
}


int main() {
	vector<int> imsi1;
	vector<int> imsi2;

	imsi1.push_back(1);
	imsi1.push_back(1);
	imsi1.push_back(9);
	imsi1.push_back(1);
	imsi1.push_back(1);
	imsi1.push_back(1);
	
	imsi2.push_back(2);
	imsi2.push_back(1);
	imsi2.push_back(3);
	imsi2.push_back(2);

	cout << solution(imsi1, 0) << endl;
	cout << solution(imsi2, 2) << endl;

	return 0;
}