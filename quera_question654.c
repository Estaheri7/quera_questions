#include <stdio.h>

int main() {
    long long int n;
    printf("Enter n: ");
    scanf("%lld", &n);
    int a;
    int b;
    int c;
    int counter = 0;
    for (a = 1; a < (n / 2); a++) {
        for (b = a; b < (n / 2); b++) {
            c = n - a - b;
            if (c * c == a * a + b * b) {
                counter++;
                printf("|a: %d, b: %d, c: %d|", a, b, c);
            }
        }
    }
    if (counter == 0) {
        printf("Impossible!");
    }   
    return 0;
}