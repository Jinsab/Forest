#include <iostream>
using namespace std;
int h = 0, m = 0;

int main() {
	ios::sync_with_stdio(false);

	cin >> h >> m;

	if (m - 45 < 0) {
		m += 15;

		if (h - 1 < 0)
			h += 23;
		else
			h -= 1;
	}
	else {
		m -= 45;
	}

	cout << h << " " << m << endl;

	return 0;
}