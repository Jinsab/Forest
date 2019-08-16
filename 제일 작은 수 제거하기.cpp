#include <string>
#include <vector>
#include <algorithm>

using namespace std;

vector<int> solution(vector<int> arr) {
	vector<int> answer;
	int min = 1000000000, idx = 0;

	if (arr.size() == 1) {
		answer.push_back(-1);
		return answer;
	}


	for (int i = 0; i < arr.size(); i++)
		answer.push_back(arr[i]);

	for (int i = 0; i < answer.size(); i++) {
		if (min > answer[i]) {
			min = answer[i];
			idx = i;
		}
	}

	answer.erase(answer.begin() + idx);

	return answer;
}

/*
#include <string>
#include <vector>
#include <algorithm>
using namespace std;

vector<int> solution(vector<int> arr) {
	vector<int> answer = arr;

	int nMin = *min_element(arr.begin(), arr.end());
	int pos = find(answer.begin(), answer.end(), nMin) - answer.begin();
	answer.erase(answer.begin() + pos);

	return answer.empty() ? vector<int>(1, -1) : answer;
}
*/