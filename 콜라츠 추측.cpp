/*
#include <string>
#include <vector>

using namespace std;

int solution(int num) {
	int answer = 0;
	long long num2 = num;

	while (answer++ <= 500) {
		num2 = num2 % 2 == 0 ? num2 / 2 : num2 * 3 + 1;

		if (num2 == 1) break;
	}

	return answer > 500 ? -1 : answer;
}
*/