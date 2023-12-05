#include <stdio.h>

int main() {
    long long int a, b;
    double min = 10e18;

    scanf("%lld%lld", &a, &b);

    if (a < b) {
        min = a;
    } else {
        min = b;
    }

    printf("%.0lf", min);
}
