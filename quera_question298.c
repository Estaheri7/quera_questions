#include <stdio.h>
#include <math.h>
#include <stdbool.h>

void finder(int n);
void printer(int number, int prime[], int size);
void prime_factor(int n, int i);

int main() {
    int n;
    scanf("%d", &n);
    finder(n);
}

void prime_factor(int n, int i) {
    int counter = 0;
    while (n % i == 0) {
        n /= i;
        counter++;
    }

    if (counter > 1) {
        printf("%d^%d", i, counter);
    } else if (counter == 1) {
        printf("%d", i);
    }
}

void printer(int number, int prime[], int size) {
    int i;
    bool firstFactorPrinted = false;
    
    for (i = size - 1; i >= 0; i--) {
        if (number % prime[i] == 0) {
            if (firstFactorPrinted) {
                printf("*");
            } else {
                firstFactorPrinted = true;
            }
            prime_factor(number, prime[i]);
        }
    }
}

void finder(int n) {
    int i;
    int j;
    int prime[100000];
    int counter = 0;

    for (i = n; i >= 2; i--) {
        bool flag = true;
        for (j = 2; j < i; j++){
            if (i % j == 0) {
                flag = false;
                break;
            }
        }
        if (flag) {
            prime[counter] = i;
            counter++;
        }
    }
    printer(n, prime, counter);
}
