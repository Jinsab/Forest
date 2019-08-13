#include <iostream>
using namespace std;

int main() {
	int n;
	long result = 1;
	cin >> n;

	// 1 2 6 24 120 720
	for (int i = 1; i <= n; i++) {
		result *= i;
	}

	cout << result << endl;

	return 0;
}