/*
#include <string>
#include <vector>
#include <cmath>
using namespace std;

#define MAX(X,Y) ((X) > (Y) ? (X) : (Y))  

vector<int> solution(vector<int> answers) {
	vector<int> answer,
				stu1 = { 1, 2, 3, 4, 5 }, 
				stu2 = { 2, 1, 2, 3, 2, 4, 2, 5 },
				stu3 = { 3, 3, 1, 1, 2, 2, 4, 4, 5, 5 },
				count = { 0, 0, 0 };

	int fi = 0, se = 0, th = 0;

	for (int i = 0; i < answers.size(); i++) {
		if (stu1[fi] == answers[i]) {
			count[0]++;
			
			if (fi == stu1.size())
				fi = 0;
			else
				fi++;
		}

		if (stu2[se] == answers[i]) {
			count[1]++;

			if (se == stu2.size())
				se = 0;
			else
				se++;
		}
		
		if (stu3[th] == answers[i]) {
			count[2]++;

			if (th == stu3.size())
				th = 0;
			else
				th++;
		}
	}
	
	int maxCount = MAX(count[0], MAX(count[1], count[2]));
	if (maxCount == count[0]) answer.push_back(1);
	if (maxCount == count[1]) answer.push_back(2);
	if (maxCount == count[2]) answer.push_back(3);


	return answer;
}
*/