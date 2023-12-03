#include <stdio.h>
#include <math.h>

void mirroable(int x);
void changer(int a, int c);
int convert_to_ten(int a, int b);

int main(){
    int a, b, c;
    scanf("%d%d%d", &a, &b, &c);
    int result_in_ten = convert_to_ten(a, b);
    changer(result_in_ten, c);
    return 0;
}

int convert_to_ten(int a, int b) {
    int digit = 0;
    int result_in_ten = 0;
    while (a != 0) {
        int remainder = a % 10;
        a /= 10;
        result_in_ten += remainder * pow(b, digit);
        digit++;
    }
    return result_in_ten;
}

void changer(int result_in_ten, int c) {
    int size = 100;
    int numbers[size];
    int counter = 0;
    int remainder;
    int helper;
    while (result_in_ten != 0) {
        helper = result_in_ten / c;
        remainder = result_in_ten % c;
        numbers[counter] = remainder;
        result_in_ten = helper;
        counter++;
    }
    int x = 0;
    for (int j = counter - 1; j >= 0; j--) {
        x = (x * 10) + numbers[j];
    }
    
    mirroable(x);
}

void mirroable(int x) {
    int temp = x;
    int remainder;
    int y = 0;
    while (temp != 0) {
        remainder = temp % 10;
        temp /= 10;
        y = (y * 10) + remainder;
    }
    if (y == x) {
        printf("YES");
    } else {
        printf("NO");
    }
}
