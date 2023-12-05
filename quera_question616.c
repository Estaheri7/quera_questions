#include <stdio.h>
#include <math.h>

int main() {
    long long int n;

    scanf("%lld", &n); 
    int power = 0;
    while (n > 0) {
        n /= 2;
        power++;
    }

    int two_powered = 1;
    int i;
    for (i = 0; i < power; i++) {
        two_powered *= 2;
    }

    printf("%d", two_powered);

}
