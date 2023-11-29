#include <stdio.h>

int main() {
    int n, a, max = 0, i;
    scanf("%d", &n);
    for (i = 0; i < n; i++) {
        scanf("%d", &a);
        if (a >= max) {
            max = a;
        }
    }
    printf("%d", max);
}