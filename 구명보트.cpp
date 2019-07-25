#include <string>
#include <vector>
#include <algorithm>

using namespace std;

int solution(vector<int> people, int limit) {
	int answer = 0, i = 0, j = people.size() - 1;

	sort(people.begin(), people.end());

	for (; j > i; j--) {
		if (people[j] + people[i] <= limit) {
			i++;
			answer++;
		}
		else {
			answer++;
		}
	}

	if (i == j)
		answer++;

	return answer;
}