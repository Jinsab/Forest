#include <iostream>
#include <vector>

using namespace std;

int main() {
	int n = 0, m = 0, result = 0, s = 1;
	vector<int> c;
	cin >> n >> m;
	
	while (m) {
		c.push_back(n * (m % 10));
		m /= 10;
	}

	for (int i = 0; i < c.size(); i++) {
		cout << c[i] << endl;
		result += c[i] * s;
		s *= 10;
	}

	cout << result << endl;
	
	return 0;
}