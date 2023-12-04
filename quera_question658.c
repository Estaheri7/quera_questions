#include <stdio.h>

int main() {
    int n;
    int max = 0;
    int sum_sood = 0;
    scanf("%d", &n);
    int soz[n];
    int i;
    int negatives = 0;

    for (i = 0; i < n; i++) {
        scanf("%d", &soz[i]);
    }

    for(i = 0; i < n; i++) {
        if (soz[i] < 0) {
            negatives++;
        }
    }

    if (negatives == n) {
        printf("0");
        return 0;
    }

    for (i = 0; i < n; i++) {
        if (soz[i] > max) {
            max = soz[i];
        }
    }
    int j;
    for (i = 0; i < n; i++) {
        sum_sood = soz[i];
        for (j = i + 1; j < n; j++) {
            sum_sood += soz[j];
            if (sum_sood > max) {
                max = sum_sood;
            }
        }
    }

    printf("%d", max);
}
