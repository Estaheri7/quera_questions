#include <stdio.h>
#include <math.h>

int main() {
    int k;
    scanf("%d", &k);

    long long int n = 1e9, i;
    double k_min = (1.0 / k);
    for (i = 0; i < n; i++) {
        if (sin(i) > 0 && sin(i) <= (k_min)) {
            printf("%lld", i);
            return 0;
        } 
    }
}
