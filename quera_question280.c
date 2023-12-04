#include <stdio.h>

int main() {
    int a, b, c;
    int max = 0;
    scanf("%d%d%d", &a, &b, &c);

    int a_sqr = a * a;
    int b_sqr = b * b;
    int c_sqr = c * c;
    if ((c_sqr == a_sqr + b_sqr) || (b_sqr == a_sqr + c_sqr) || (a_sqr == c_sqr + b_sqr)) {
        printf("YES");
    } else {
        printf("NO");
    }
}
