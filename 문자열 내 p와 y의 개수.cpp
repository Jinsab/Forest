/*
#include <string>
#include <iostream>
using namespace std;

bool solution(string s)
{
	bool answer = true;
	int ps = 0, ys = 0;
	for (int i = 0; i < s.length(); i++) {
		if (s.at(i) == 'p' || s.at(i) == 'P')
			ps++;
		else if (s.at(i) == 'y' || s.at(i) == 'Y')
			ys++;
	}

	if (ps != ys)
		answer = false;

	return answer;
}

#include <string>
#include <iostream>
using namespace std;

bool solution(string s)
{
	int ps = 0, ys = 0;
	for (int i = 0; i < s.length(); i++) {
		if (s.at(i) == 'p' || s.at(i) == 'P')
			ps++;
		else if (s.at(i) == 'y' || s.at(i) == 'Y')
			ys++;
	}

	return ps == ys;
}
*/