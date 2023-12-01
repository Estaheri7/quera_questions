#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);
    if (n % 7 == 0) {
        printf("Mat");
    } else {
        printf("Pat");
    }
}