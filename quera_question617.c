#include <stdio.h>
#include <math.h>

int main() {
    int n;
    scanf("%d", &n);
    int reversed = 0;
    int temp = n;

    while (temp != 0) {
        reversed = reversed * 10 + temp % 10;
        temp /= 10;
    } 
    printf("%s", (reversed == n) ? "YES" : "NO");
    return 0;
}