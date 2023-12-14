#include <stdio.h>

int is_prime(int num);
void collect_primes(int size, int nums[]);
void create_array(int n, int m);
void sort_f(int size, int *arr);

int main() {

    int n, m;
    scanf("%d%d", &n, &m);

    create_array(n, m); 
}

int is_prime(int num) {
    int i;
    for (i = 2; i < num; i++) {
        if (num % i == 0) {
            return 0;
        }
    }

    return 1;
}

void collect_primes(int size, int nums[]) {
    int i;
    int prime_size = 0;
    int prime_nums[10000];
    for (i = 0; i < size; i++) {
        if (is_prime(nums[i])) {
            prime_nums[prime_size++] = nums[i];
            
        }
    }

    for (i = 0; i < prime_size; i++) {
        if (prime_nums[i] != 1 && prime_nums[i] != 0) {
            if (i == prime_size - 1) {
                printf("%d", prime_nums[i]);
            } else {
                printf("%d,", prime_nums[i]);
            }           
        } 
        
    }
}

void create_array(int n, int m) {
    int i, j;
    int size = m - n - 1;
    int nums[size];
    for (i = n + 1, j = 0; i < m; i++, j++) {
        nums[j] = i;
    }

    sort_f(size, nums);

}

void sort_f(int size, int *arr) { 
    int i, j;
    for (i = 0; i < size; i++) {
        for (j = i + 1; j < size; j++) {
            if (arr[j] < arr[i]) {
                int temp = arr[j];
                arr[j] = arr[i];
                arr[i] = temp;
            }
        }
    }

    collect_primes(size, arr);
}