#include <string>
#include <vector>

using namespace std;

string solution(string s) {
	string answer = "";

	return s.size() % 2 == 0 ? s.substr((s.length() / 2), (s.length() / 2 + 1)) : s.substr(s.length()/2+1, s.length()/2+1);
}