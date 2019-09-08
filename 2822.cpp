#include <iostream>
#include <vector>
#include <map>
#include <algorithm>

using namespace std;

int main() {
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	vector<int> qe;
	map<int, int> numbers;
	map<int, int>::iterator it;
	int n = 0, res = 0;

	for (int i = 1; i <= 8; i++) {
		cin >> n;
		numbers.insert(pair<int, int>(n, i));
	}

	for (it = next(numbers.begin(), 3); it != numbers.end(); ++it) {
		res += it->first;
		qe.push_back(it->second);
	}

	sort(qe.begin(), qe.end());

	cout << res << endl;

	for (int i = 0; i < qe.size(); i++) {
		cout << qe[i] << " ";
	}

	cout << endl;

	return 0;
}