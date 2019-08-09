/*
#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int n;
string word;
vector<string> str;

bool desc(const string &a, const string &b) {
	if (a.size() == b.size())
		return a < b;

	return a.size() < b.size();
}

int main() {
	ios::sync_with_stdio(false);

	cin >> n;

	for (int i = 0; i < n; i++) {
		cin >> word;
		str.push_back(word);
	}

	vector<string>::iterator iter1;
	vector<string>::iterator iter2;

	sort(str.begin(), str.end(), desc);

	iter2 = unique(str.begin(), str.end());

	for (iter1 = str.begin(); iter1 != iter2; iter1++)
		cout << *iter1 << endl;

	return 0;
}
*/