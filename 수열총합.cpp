#include <stdio.h>

int main() {
	int i, j, n, numbers[100], total;
	
	scanf("%d", &n);
	
	for(i = 1; i <= n; i++) {
		for(j = 1; j <= i; j++) {
			total += j;
		}
	}
	
	printf("%d", total);
	
	return 0;
}
