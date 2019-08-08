/*
#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int n = 0, answer = 0, cnt = 1;
vector<int> num;

int main() {
	cin >> n;

	while (n > 0) {
		num.push_back(n % 10);
		n = n / 10;
	}

	sort(num.begin(), num.end());

	for (int i = 0; i < num.size(); i++) {
		answer += num[i] * cnt;
		cnt *= 10;
	}

	cout << answer << endl;

	return 0;
}
*/