#include <string>
#include <vector>
#include <algorithm>
#include <iostream>

using namespace std;

string solution(string s) {
	string answer = "", number = "";
	vector<string> str;
	vector<int> num;

	for (int i = 0; i <= s.length(); i++) {
		if (s[i] == ' ' || i == s.length()) {
			str.push_back(number);
			number.clear();
		}
		else {
			number += s[i];
		}
	}

	for (int i = 0; i < str.size(); i++)
		num.push_back(atoi(str[i].c_str()));

	sort(num.begin(), num.end());

	answer += to_string(num.front());
	answer += " ";
	answer += to_string(num.back());

	return answer;
}