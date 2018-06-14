#include <iostream>
#include <math.h>

using namespace std;

class Point{
public:
	int x, y;
	Point(){
		x = y = 0;
	}
};

int Pita(int x, int x1){
	x = x < 0 ? -x : x;
	x1 = x1 < 0 ? -x1 : x1;
	int temp = pow(x > x1 ? x - x1 : x1 - x, 2);
	return temp;
}

int main()
{
	Point P[5];
	int sensorNum = 0;
	int minscore = -1;
	int X, Y, R, i;
	// X와 Y는 물결파가 발생한 중심점의 좌표를 나타내는 절대값이 1,000이하인 정수다.
	// R은 물결파가 감지될 수 있는 최대의 유효 반지름을 나타내는 1,000이하의 자연수다.
	cin >> X >> Y >> R;

	for(i=0; i<5; i++){
		cin >> P[i].x >> P[i].y;
		if(minscore > Pita(X, P[i].x) + Pita(Y, P[i].y)){
			if(pow(R, 2) >= Pita(X, P[i].x) + Pita(Y, P[i].y)){
				sensorNum = i + 1;
				minscore = Pita(X, P[i].x) + Pita(Y, P[i].y);
			}
		}
		else if(minscore == -1 && pow(R, 2) >= pow(X- P[i].x, 2)+pow(Y- P[i].y, 2))
		{
			sensorNum = i + 1;
			minscore = Pita(X, P[i].x) + Pita(Y, P[i].y);
		}
	}
	if(sensorNum){	
	cout << sensorNum << endl;
	}
	else{
		cout << -1 << endl;
	}
	return 0;
}
