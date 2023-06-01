#include <stdio.h>

int sumDigits(int * n) {
    int sum = 0;
    while (*n > 0) {
        sum += *n % 10;
        *n /= 10;
    }
    return sum;
}

int main() {
    int n, sum;
    scanf("%d", &n);
    sum = sumDigits(&n);
    printf("%d", sum);
    
    return 0;
}