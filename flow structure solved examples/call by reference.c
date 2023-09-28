//pointer and function call by reference

#include <stdio.h>

int addone(int *ptr) {
    (*ptr)++;
    return *ptr;
}

int main() {
    int c = 4, *pc;
    pc = &c;
    int result = addone(pc);
    printf("c = %d", result);
    //address of c 
    printf("\naddress %p", pc);
    
    return 0;
}

