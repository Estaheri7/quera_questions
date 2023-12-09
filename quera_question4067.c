#include <stdio.h>

void khars(int t);

int main() {
    int t;
    scanf("%d", &t);

    khars(t);

}

void khars(int t) {
    int i;
    int save_output[t];
    int x, y;
    for (i = 0; i < t; i++) {
        scanf("%d%d", &x, &y);
        if (((x % 2 != 0) && (y % 2 != 0)) && (y == x - 2 || y == x)) {
            save_output[i] = (x + y) - 1;
        } else if (((x % 2 == 0) && (y % 2 == 0)) && (y == x - 2 || y == x)) {
            save_output[i] = x + y;
        } else {
            save_output[i] = -1;
        }
    }

    for (i = 0; i < t; i++) {
        printf("%d\n", save_output[i]);
    }
}
