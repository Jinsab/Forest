#include <stdio.h>

int main() {
	int i, number, numbers[100];
	
	scanf("%d", &number);
	
	for(i=0; i < number; i++) {
		scanf("%d", &numbers[i]);
	}
	
	for(i=number-1; i >= 0; i--) {
		printf("%d ", numbers[i]);
	}
	
	return 0;
}
