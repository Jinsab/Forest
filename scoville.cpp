/*
#include <string>
#include <vector>
#include <algorithm>
#include <queue>
#include <iostream>
using namespace std;

int solution(vector<int> scoville, int K) {
	int answer = 0;
	int first, second;
	priority_queue<int, vector<int>, greater<int>> temp;
	for (int i = 0; i < scoville.size(); i++)
		temp.push(scoville[i]);

	while (temp.top() < K && temp.size() > 1) {
		answer++;
		first = temp.top();
		temp.pop();
		second = temp.top();
		temp.pop();
		temp.push(first + second * 2);
	}
	if (temp.top() < K)
		return -1;
	return answer;
}

int main() {
	vector<int> v;
	v.push_back(1);
	v.push_back(2);
	v.push_back(3);
	v.push_back(9);
	v.push_back(10);
	v.push_back(12);

	cout << solution(v, 7) << endl;
	return 0;
}
*/