/*
#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
	int n, k, c = 0;
	vector<int> result;

	cin >> n >> k;

	for (int i = 1; i <= n; i++) {
		if (n % i == 0)
			result.push_back(i);
	}

	if (k > result.size())
		cout << "0";
	else
		cout << result[k-1];

	return 0;
}
*/