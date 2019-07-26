#include <string>

int max, cnt, j;

std::string solution(std::string number, int k) {
	std::string answer = "";

	for (int i = number.length() - k; i > 0; i--) {
		max = 0;

		for (j = 0; j < number.length() - i + 1; j++) {
			if (max < number[j]) {
				max = number[j];
				cnt = j + 1;
			}
		}
		number.replace(0, cnt, " ");

		answer += max;
	}

	return answer;
}