/*
#include <string>
#include <vector>
#include <iostream>
#include <algorithm>

using namespace std;
*/

/*
vector<int> solution(vector<int> array, vector<vector<int>> commands) {
	vector<int> answer, array2;

	for (int i = 0; i < commands.size(); i++) {
		for (int j = commands.at(i).at(0); j <= commands.at(i).at(1); j++) { // 1 7 3
			// 1 5 2 6 3 7 4
			// 1 2 3 4 5 6 7
			array2.push_back(array.at(j-1));

			// 2 3 5 6
			sort(array2.begin(), array2.end());
		}
		// 5
		answer.push_back(array2.at(commands.at(i).at(2)-1));

		array2.clear();
	}

	return answer;
}
*/

/*
vector<int>& getPartialArray(const vector<int>& array, int i, int j) {
	vector<int> array2;
	i--;
	j--;

	for (i; i <= j; ++i) {
		array2.emplace_back(array[i]);
	}

	return array2;
}

vector<int> solution(vector<int> array, vector<vector<int>> commands) {
	vector<int> answer;
	vector<int> array2;

	for (int a = 0; a < 3; ++a) {
		int i = commands[a][0];
		int j = commands[a][1];
		array2 = getPartialArray(array, i, j);
		std::sort(array2.begin(), array.end());
		answer.emplace_back(array2[commands[a][2] - 1]);
	}

	return answer;
}
*/

/*
vector<int> solution(vector<int> array, vector<vector<int>> commands) {
	vector<int> answer, temps;

	for (vector<int>& arr : commands) {
		temps.clear();

		temps.assign(array.begin() + arr[0] - 1, array.begin() + arr[1]);
		std::sort(temps.begin(), temps.end());

		answer.push_back(temps[arr[2] - 1]);
	}

	return answer;
}
*/

/*
int main() {
	vector<int> result;

	vector<int> v;
	v.push_back(1);
	v.push_back(5);
	v.push_back(2);
	v.push_back(6);
	v.push_back(3);
	v.push_back(7);
	v.push_back(4);

	vector<int> vec1;
	vec1.push_back(2);
	vec1.push_back(5);
	vec1.push_back(3);

	vector<int> vec2;
	vec2.push_back(4);
	vec2.push_back(4);
	vec2.push_back(1);

	vector<int> vec3;
	vec3.push_back(1);
	vec3.push_back(7);
	vec3.push_back(3);

	vector<vector<int>> v2;
	v2.push_back(vec1);
	v2.push_back(vec2);
	v2.push_back(vec3);
		
	result = solution(v, v2);

	for (int i = 0; i < result.size(); i++) {
		cout << result.at(i) << endl;
	}

	return 0;
}
*/