#include <stdio.h>

long factorial(int n) {
    if (n < 0) return -1; // error case
    long result = 1;
    for (int i = 1; i <= n; i++) {
        result *= i;
    }
    return result;
}

int main() {
    int num;
    scanf("%d", &num);
    printf("%ld\n", factorial(num));
    return 0;
}
