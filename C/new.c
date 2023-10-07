#include <stdio.h>
#include <stdbool.h>

bool is_prime(int num) {
    if (num <= 1) {
        return false; // 1 and negative numbers are not prime
    }
    for (int i = 2; i * i <= num; i++) {
        if (num % i == 0) {
            return false;
        }
    }
    return true;
}

int main() {
    int num = 44;
    for (int i = 1; i <= num; i++) {
        if (num % i == 0&&is_prime(i)) {
                printf("%d\n", i);
            
        }
    }
    return 0; // Added a return statement for main
}
