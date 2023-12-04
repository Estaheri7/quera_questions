#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);

    int d_sum = 0;
    int i;
    for (i = 1; i < n; i++) {
        if (n % i == 0) {
            d_sum += i;
        }
    }

    if (d_sum == n) {
        printf("YES");
    } else {
        printf("NO");
    }

}
