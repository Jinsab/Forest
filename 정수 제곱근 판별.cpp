#include <string>
#include <vector>
#include <iostream>

using namespace std;

long long solution(long long n) {
	long long answer = -1;
	int i = 0;

	while (true) {
		i++;

		if (n >= i * i) {
			if (i*i == n) {
				answer = (i + 1)*(i + 1);
				break;
			}
		}
		else {
			break;
		}
	}

	return answer;
}

int main() {
	cout << solution(121) << endl;

	return 0;
}