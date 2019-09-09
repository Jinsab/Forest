#include <iostream>
#include <vector>
#include <string>

using namespace std;

int main() {
	vector<string> str;
	string s = "", nemo = "NEMO", capital = "";
	bool cnt;
	
	while (true) {
		cnt = false;

		getline(cin, s);

		if (s == "EOI")
			break;

		for (int i = 0; i < s.length(); i++)
			capital += toupper(s[i]);

		for (int i = 0; i + 3 < capital.length(); i++)
			if (capital.substr(i, 4) == nemo)
				cnt = true;

		if (cnt)
			str.push_back("Found");
		else
			str.push_back("Missing");

		capital.clear();
	}

	for (int i = 0; i < str.size(); i++)
		cout << str[i] << endl;

	return 0;
}