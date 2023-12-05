#include <stdio.h>

int main() {
    int n, p;
    float k;

    scanf("%d%f%d", &n, &k, &p);

    float all = n * k * p;

    printf("%.0f", all);

    return 0;
}
