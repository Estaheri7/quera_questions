#include <stdio.h>
#include <math.h>

int main() {
    int l, r, q;
    scanf("%d", &q);

    int i;
    int squared_number = 0;
    int squared_array[q];
    for (i = 0; i < q; i++) {
        scanf("%d%d", &l, &r);

        squared_number = floor(sqrt(r)) - ceil(sqrt(l)) + 1;
        squared_array[i] = squared_number;
    }

    for (i = 0; i < q; i++) {
        printf("%d\n", squared_array[i]);
    }
}
