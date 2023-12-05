#include <stdio.h>


int main() {
    int n;
    int i, max = 1000;
    scanf("%d", &n);
    int all = n * 100;
    int p[n];
    for (i = 0; i < n; i++) {
        scanf("%d", &p[i]);
        if (p[i] < max) {
            max = p[i];
        }
    }
    int sum = 0;
    for (i = 0; i < n; i++) {
        sum += p[i];
    }

    int minus = all - sum;
    if ((100 - minus) < 0) {
        printf("%d %d", 0, max);
    } else {
        printf("%d %d", 100 - minus, max);
    }




}
