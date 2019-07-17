#include <string>
#include <vector>

using namespace std;

bool solution(int x) {
	bool answer = true;
	int result = 0, ori_x = x;

	while (x) {
		result += x % 10;
		x = x / 10;
	}

	if (ori_x % result != 0)
		answer = false;

	return answer;
}