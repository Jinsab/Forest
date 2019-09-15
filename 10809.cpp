#include <iostream>
#include <string>
#include <vector>

using namespace std;

int main() {
	vector<int> v;
	string s = "";

	v.assign(26, -1);

	cin >> s;

	for (int i = 0; i < s.length(); i++) {
		if (v[s[i] - 97] == -1)
			v[s[i] - 97] = i;
		}

	for (int i = 0; i < v.size(); i++)
		cout << v[i] << " ";

	return 0;
}