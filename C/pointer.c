#include <stdio.h>
#include <stdlib.h>

int main(void){
    int *x;
    int *y;

    x = malloc(sizeof(int));

    *x = 42;

    y = x;

    printf("x: %p\n", x);
    printf("x: %d\n", *x);

    *y = 13;
    printf("y: %p\n", y);
    printf("y: %d\n", *y);

    printf("After y = 13, x's value at that memory address: %d\n", *x);
}
