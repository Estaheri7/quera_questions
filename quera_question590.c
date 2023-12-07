#include <stdio.h>

long long int GCD(long long int n, long long int m);
long long int LCM(long long int n, long long int m);

int main() {
    long long int n, m;
    scanf("%lld %lld", &n, &m);
    long long int result_gcd = GCD(n, m);
    long long int result_lcm = LCM(n, m);
    printf("%lld %lld", result_gcd, result_lcm);
    return 0;
}

long long int GCD(long long int n, long long int m) {
    if (m == 0) {
        return n;
    } else if (n == 0) {
        return m;
    }
    return GCD(m, n % m);
}

long long int LCM(long long int n, long long int m) {
    if (n == 0 || m == 0) {
        return 0;
    }
    long long int gcd = GCD(n, m);
    m /= gcd;
    n /= gcd;
    long long int lcm = n * m * gcd;
    return lcm;
}
