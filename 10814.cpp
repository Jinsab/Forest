#include <iostream>
#include <string>
#include <algorithm>
#include <vector>

using namespace std;

struct account {
	int age;
	string name;
};

bool desc(const account& a, const account& b) {
	return a.age < b.age;
}

int main() {
	int n;

	cin >> n;

	vector <account> list(n);

	for (int i = 0; i < n; i++) {
		cin >> list[i].age;
		cin >> list[i].name;
	}

	stable_sort(list.begin(), list.end(), desc);

	for (int i = 0; i < n; i++)
		cout << list[i].age << ' ' << list[i].name << '\n';
}