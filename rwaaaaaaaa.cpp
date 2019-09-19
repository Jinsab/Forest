#include <stdio.h>
#include <random>
#include <time.h>
#include <math.h>

void dragonball(int res[], int n);

int main() {
	int n = 0, k = 0, result = 0;
	int res[6] = { 0, 0, 0, 0, 0, 0 };
	
	srand(time(NULL));

	printf("�ֻ����� ��� �����ڽ��ϱ�? : ");
	scanf_s("%d", &n);
	
	for (int i = 0; i < n; i++) {
		k = (rand() % 6) + 1;
		res[k - 1]++;
		result += k;
	}

	float ev = (float)result / (float)n; // ��� Expected value
	float di; // �л� Dispersion
	float sd; // ǥ������ Standard deviation

	di = ((pow((1.0 - ev), 2) * (res[0] + res[5])) + (pow((2.0 - ev), 2) * (res[1] + res[4])) + (pow((3.0 - ev), 2) * (res[2] + res[3]))) / (float)n;
	sd = sqrt(di);

	printf("\n");

	dragonball(res, n);

	printf("��� : %f\n", ev);
	printf("�л� : %f\n", di);
	printf("ǥ������ : %f\n", sd);
	
	return 0;
}

void dragonball(int res[], int n) {
	float result = 0.0;
	
	printf("X\t|");
	
	for (int i = 0; i < 6; i++)
		printf("%d\t|", i+1);
	//printf("%d\t|", n);
	
	printf("�հ�\t|");
	
	printf("\n��������������������������������������������������������������������������������������������������������������������������������\n");
	
	printf("P(X=x��)|");
	
	for (int i = 0; i < 6; i++) {
		//printf("%d\t|", res[i]);
		printf("%.4lf\t|", res[i] / (float)n);
		result += res[i] / (float)n;
	}

	printf("%.4lf\t|\n\n", result);
}