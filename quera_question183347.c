#include <stdio.h>

int main() {
    int n;
    int twos = 0;
    scanf("%d", &n);

    while (n >= 2) {
        n /= 2;
        twos++;
    } 
    printf("%d", twos);
}