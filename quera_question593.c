#include <stdio.h>

int main() {
    int n, temp, digit, b;
    b = 0;
    
    printf("Enter n: ");
    scanf("%d", &n);

    temp = n;
    int next = n + 1;

    while (temp != 0) {
        digit = temp % 10;
        temp /= 10;
        b += digit;
    }

    int counter = 0;
    while (counter <= b) {
        int is_p = 1;
        for (int i = 2; i * i <= next; i++) {
            if (next % i == 0) {
                is_p = 0;
                break;
            }
        }

        if (is_p) {
            counter++;
            if (counter == b) {
                break;
            }
        }
        next++;

    }
    printf("%d", next);
}

