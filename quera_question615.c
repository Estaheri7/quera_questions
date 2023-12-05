#include <stdio.h>
#include <math.h>

int main() {
    char yd[4];
    int i;
    for (i = 0; i < 4; i++) {
        scanf("%c", &yd[i]);
    }

    printf("saal:");
    printf("%c", yd[0]);
    printf("%c", yd[1]);
    printf("\n");
    printf("maah:");
    printf("%c", yd[2]);
    printf("%c", yd[3]);


}
