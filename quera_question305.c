#include <stdio.h>
long long int GCD (long long int a, long long int b);

int main() {
    long long int a, b;
    scanf("%lld\n%lld", &a, &b);
    printf("%lld", GCD(a, b));
    return 0;
}

long long int GCD(long long int a, long long int b) {
    if (b == 0) {
        return a;
    }
    return GCD(b, a % b);
}