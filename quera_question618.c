#include <stdio.h>

int main() {
    int n, k;
    scanf("%d", &n);
    k = 2 * n + 1;
    int i, j;
    for (i = 0; i < (k + 1) / 2; i++) {
        for (j = 0; j < ((k - 1) / 2) - i; j++) {
            printf(" ");
        }

        for (j = 0; j < 2 * i + 1; j++) {
            printf("*");
        }
        printf("\n");
    }

    for (i = ((k + 1) / 2) - 1; i >= 0; i--) {
        if (i == ((k + 1) / 2) - 1) {
            continue;
        }
        for (j = 0; j < ((k - 1) / 2) - i; j++) {
            printf(" ");
        }
        for (j = 0; j < 2 * i + 1; j++) {
            printf("*");
        }
        printf("\n");
    }
}
