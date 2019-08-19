#include <string>
#include <vector>

using namespace std;

string solution(string s) {
	string answer = "";
	bool cnt = true;

	for (int i = 0; i < s.length(); i++) {
		if (s.at(i) == ' ') {
			answer += s[i];
			cnt = true;
		}
		else {
			if (cnt) {
				answer += toupper(s[i]);
				cnt = false;
			}
			else {
				answer += tolower(s[i]);
				cnt = true;
			}
		}
	}

	return answer;
}