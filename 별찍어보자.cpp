#include <stdio.h>

int main(void)
{
    int i, j, n;
    scanf("%d", &n);
    for (i = n; i >= 1; i--) {
        for (j = 1; j <= n * 2; j++) {
            printf("%c", (j == i || j == (n * 2 + 1 - i)) ? '*' : ' ');
        }
        printf("\n");
    }

    for (i = 1; i <= n; i++) {
        for (j = 1; j <= n * 2; j++) {
            printf("%c", (j == i || j == (n * 2 + 1 - i)) ? '*' : ' ');
        }
        printf("\n");
    }
    return 0;
}
