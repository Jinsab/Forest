#include <vector>
#include <iostream>
#include <algorithm>

using namespace std;

vector<int> solution(vector<int> arr)
{
	vector<int> answer;
	sort(arr.begin(), arr.end());
	answer.push_back(arr.front());

	for (int i = 0; i < arr.size(); i++) {
		if (answer.back() != arr.at(i))
			answer.push_back(arr.at(i));
	}

	return answer;
}