/*
#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int solution(vector<int> d, int budget) {
	int answer = 0;

	sort(d.begin(), d.end());

	for (int i = 0; i < d.size(); i++) {
		if (answer + d.at(i) > budget)
			return i;
		else
			answer += d.at(i);
	}
}
*/