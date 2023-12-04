#include <stdio.h>
#include <stdlib.h>

int gcd(int a, int b) {
    a = abs(a);
    b = abs(b);

    if (b == 0) {
        return a;
    } else {
        return gcd(b, a % b);
    }
}

int main() {
    int num1, num2;

    scanf("%d %d", &num1, &num2);

    int result = gcd(num1, num2);

    printf("%d", result);

    return 0;
}
