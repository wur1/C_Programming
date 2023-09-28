#include <stdio.h>

int main() {
    int *p, c;
    c=5;
    p=&c;
    printf("the value of c is %d", *p);
    printf("\nthe address of c is %p", p);

    return 0;
}
