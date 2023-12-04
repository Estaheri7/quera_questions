#include <stdio.h>

int main() {
    long long int n;
    scanf("%lld", &n);
    long long int a;
    long long int b;
    long long int c;
    int counter = 0;
    for (a = 1; a < (n / 2); a++) {
        for (b = a; b < (n / 2); b++) {
            c = n - a - b;
            if (c * c == a * a + b * b) {
                counter++;
                printf("%lld %lld %lld\n", a, b, c);
                return 0;
            }
        }
    }
    if (counter == 0) {
        printf("Impossible");
    }   
    return 0;
}
