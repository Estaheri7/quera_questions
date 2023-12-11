#include <stdio.h>

int main() {
    int n, k;
    scanf("%d%d", &n, &k);

    int a;
    int i;
    int sum = 0;
    for (i = 0; i < n; i++) {
        scanf("%d", &a);
        sum += a;
    }

    int remainder = sum % k;
    int answer = sum / k;
    int bottles = 0;
    n = n - answer;
    if (remainder) {
        n--;
    }

    for (i = 0; i < n; i++) {
            bottles++;
        }
    

    printf("%d", bottles);
}
