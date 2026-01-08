#include <cs50.h>
#include <stdio.h>

void swap(int *a, int *b);
int main(void)
{
    int x = get_int("X: ");
    int y = get_int("Y: ");
    printf("Before Swap: x = %i, y = %i\n", x, y);
    swap(&x, &y);
    printf("After Swap: x = %i, y = %i\n", x, y);
}

void swap(int *a, int *b)
{
    int temp = *a;
    *a = *b;
    *b = temp;
}
