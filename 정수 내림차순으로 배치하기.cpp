#include <string>
#include <vector>
#include <algorithm>

using namespace std;

long long solution(long long n) {
	long long answer = 0, ws = 1;
	vector<int> number;

	while (n) {
		number.push_back(n % 10);
		n = n / 10;
	}

	sort(number.begin(), number.end());

	for (int i = 0; i < number.size(); i++) {
		answer += number[i] * ws;
		ws *= 10;
	}

	return answer;
}