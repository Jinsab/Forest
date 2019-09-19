#include <stdio.h>
#include <random>
#include <time.h>
#include <math.h>

void dragonball(int res[], int n);

int main() {
	int n = 0, k = 0, result = 0;
	int res[6] = { 0, 0, 0, 0, 0, 0 };
	
	srand(time(NULL));

	printf("주사위를 몇번 던지겠습니까? : ");
	scanf_s("%d", &n);
	
	for (int i = 0; i < n; i++) {
		k = (rand() % 6) + 1;
		res[k - 1]++;
		result += k;
	}

	float ev = (float)result / (float)n; // 기댓값 Expected value
	float di; // 분산 Dispersion
	float sd; // 표준편차 Standard deviation

	di = ((pow((1.0 - ev), 2) * (res[0] + res[5])) + (pow((2.0 - ev), 2) * (res[1] + res[4])) + (pow((3.0 - ev), 2) * (res[2] + res[3]))) / (float)n;
	sd = sqrt(di);

	printf("\n");

	dragonball(res, n);

	printf("기댓값 : %f\n", ev);
	printf("분산 : %f\n", di);
	printf("표준편차 : %f\n", sd);
	
	return 0;
}

void dragonball(int res[], int n) {
	float result = 0.0;
	
	printf("X\t|");
	
	for (int i = 0; i < 6; i++)
		printf("%d\t|", i+1);
	//printf("%d\t|", n);
	
	printf("합계\t|");
	
	printf("\n────────────────────────────────────────────────────────────────\n");
	
	printf("P(X=xι)|");
	
	for (int i = 0; i < 6; i++) {
		//printf("%d\t|", res[i]);
		printf("%.4lf\t|", res[i] / (float)n);
		result += res[i] / (float)n;
	}

	printf("%.4lf\t|\n\n", result);
}