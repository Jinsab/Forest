/*
#include <iostream>
#include <vector>
#include <string>

using namespace std;

int main() {
	int fi, se, res;
	string answer = "", input = "";
	vector<string> str;

	while (true) {
		fi = 0, se = 0, res = 0;
		str.erase(str.begin(), str.end());

		cout << "수식 입력(0:종료) >> ";
		getline(cin, input);

		if (input == "0")
			break;

		for (int i = 0; i <= input.length(); i++) {
			if (input[i] == ' ' || i == input.length()) {
				str.push_back(answer);
				answer.clear();
			}
			else {
				answer += input[i];
			}
		}

		fi = atoi(str.at(0).c_str());
		se = atoi(str.at(2).c_str());

		if (str.at(1) == "+")
			res = fi + se;
		else if (str.at(1) == "-")
			res = fi - se;
		else if (str.at(1) == "*")
			res = fi * se;
		else if (str.at(1) == "/")
			res = fi / se;
		else if (str.at(1) == "%")
			res = fi % se;

		cout << fi << " " << str.at(1) << " " << se << " = " << res << endl;
	}

	return 0;
}
*/