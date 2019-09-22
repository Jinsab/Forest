#include <iostream>
#include <string>
#include <vector>

using namespace std;

int main() {
	int n = 0, c = 0;
	string s1 = "", s2 = "";
	vector<string> word;

	cin >> n;

	for (int i = 0; i < n; i++) {
		cin >> c >> s1;

		for (int j = 0; j < s1.length(); j++) {
			for (int k = 0; k < c; k++)
				s2 += s1[j];
		}

		word.push_back(s2);
		s2.clear();
	}

	for (int i = 0; i < word.size(); i++) {
		cout << word[i] << endl;
	}

	return 0;
}