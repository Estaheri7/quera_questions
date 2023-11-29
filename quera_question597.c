#include <stdio.h>

int main() {
    int n, x, y, i;
    scanf("%d", &n);
    x = 0, y = 0;
    for (i = 1; i < n; i++) {
        if (x == 0 && y == 0) {
            x += 1;
        }
        else if ((x != y) && ((x >= 0) || (y >= 0))) {
            y = x;
        }
        else if (x == y && (x >= 0) && (y >= 0)) {
            x = (-1) * x;
        }
        else if (x == y && (x < 0) && (y < 0)) {
            x = (-1) * x + 1;
        }
    }
    printf("%d %d", x, y);
}