#include <stdio.h>
long double myPow(long double base, unsigned int exp);

int main() {
    long double base;
    unsigned int exp;
    scanf("%Lf%u", &base, &exp);

    printf("%0.3Lf", myPow(base, exp));
}

long double myPow(long double base, unsigned int exp) {
    if (exp == 0) {
        return 1;
    } else if (exp % 2 == 0) {
        long double temp = myPow(base, exp / 2);
        return temp * temp;
    } else {
        long double temp =  myPow(base, (exp - 1) / 2);
        return base * temp * temp;
    }
}