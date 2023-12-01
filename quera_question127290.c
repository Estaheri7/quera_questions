#include <stdio.h>
#include <math.h>

int main() {
    int n, s, a, t;
    scanf("%d", &t);
    int i;
    int outs[t];
    for (i = 0; i < t; i++) {
        scanf("%d", &n);
        scanf("%d", &s);
        scanf("%d", &a);
        int each = (s - a) / (n);
        if (each == 0) {
            outs[i] = -1;
        } else if ((s == each * n + a) && (each > 0)) {
            outs[i] = each;
        } else {
            outs[i] = -1;
        }
    }

    for (i = 0; i < t; i++) {
        printf("%d\n", outs[i]);
    }


}