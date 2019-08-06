#include <iostream>
#include <vector>
#include <string>

using namespace std;

int main() {
	vector<string> num;
	string str, word = "";
	getline(cin, str);

	for (int i = 0; i <= str.length(); i++) {
		if (str[i] == ' ' && word.length() > 0) {
			num.push_back(word);
			cout << word << endl;
			word.clear();
		}
		else {
			word += str[i];
		}
	}

	if (str.back() != ' ')
		num.push_back(word);

	printf("%d", num.size());

	return 0;
}