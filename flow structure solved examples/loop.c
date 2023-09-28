#include <stdio.h>

int main() {
    int n = 6; // Change this value to generate a different number of Fibonacci numbers
    long long int first = 0, second = 1, next, i;

    printf("Fibonacci Sequence (first %d numbers):\n", n);

    for (i = 0; i < n; i++) {
        if (i <= 1) {
            next = i;
        } else {
            next = first + second;
            first = second;
            second = next;
        }
        printf("%lld ", next);
    }

    printf("\n");

    return 0;
}
