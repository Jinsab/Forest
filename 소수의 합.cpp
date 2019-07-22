/*
#include <vector>
#include <iostream>

using namespace std;

long long solution(int N) {
	long long answer = 0;
	vector<int> so;

	for (int i = 0; i <= N; i++)
		so.push_back(i);

	for (int i = 2; i <= N; i++) {
		if (so[i] == 0)
			continue;

		for (int j = i + i; j <= N; j += i)
			so[j] = 0;
	}

	for (int i = 2; i <= N; i++)
		if (so[i] != 0)
			answer += so[i];

	return answer;
}
*/
/*
#include <vector>

using namespace std;

long long solution(int N) {
	long long answer = 0;
	bool check[10000001] = {false, };
	for (int i=2; i<=N; i++) {
		if (!check[i]) answer += i;
		for (int j=i; j<=N; j+=i) {
			check[j] = true;
		}
	}
	return answer;
}
*/