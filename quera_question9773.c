#include <stdio.h>

int main() {
    int i, j, n;
    scanf("%d", &n);
    int hesab = (n + 1) / 2;
    int ketab = (n - 1) / 2;
    for (i = 0; i < hesab; i++) {
        for (j = 0; j < ketab - i; j++) {
            printf(" ");
        }
        for (j = 0; j < 2 * i + 1; j++) {
            printf("*");
        }
        for (j = 0; j < ketab - i; j++) {
            printf(" ");
        }
        for (j = 0; j < ketab - i; j++) {
            printf(" ");
        }
        for (j = 0; j < 2 * i + 1; j++) {
            printf("*");
        }
        if (i == hesab - 1) {
            break;
        }
        printf("\n");
    }
    for (i = hesab - 1; i >= 0; i--) {
        for (j = 0; j < ketab - i; j++) {
            printf(" ");
        }
        for (j = 0; j < 2 * i + 1; j++) {
            if (i == (((n + 1) / 2) - 1)) {
                break;
            }
            printf("*");
        }
        for (j = 0; j < ketab - i; j++) {
            printf(" ");
        }
        for (j = 0; j < ketab - i; j++) {
            printf(" ");
        }
        for (j = 0; j < 2 * i + 1; j++) {
            if (i == (((n + 1) / 2) - 1)) {
                break;
            }
            printf("*");
        }
        printf("\n");
    }

}