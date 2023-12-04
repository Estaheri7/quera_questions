#include <stdio.h>

void base_changer(int n, int b);

int main() {
    int n, b;
    scanf("%d", &n);
    scanf("%d", &b);
    
    base_changer(n, b);
    
    return 0;
}

void base_changer(int n, int b) {
    char characters[] = "ABCDEF";
    int remainder = 0;
    int size = 100;
    char digits[size];
    int i = 0;
    
    while (n != 0) {
        remainder = n % b;
        n /= b;
        if (remainder >= 0 && remainder <= 9) {
            digits[i] = remainder + '0';
        } else if (remainder >= 10 && remainder <= 15) {
            digits[i] = characters[remainder - 10];
        }
        i++;
    }
    
    for (int j = i - 1; j >= 0; j--) {
        printf("%c", digits[j]);
    }
}
