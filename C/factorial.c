#include <stdio.h>

int factorial(int n);

int main(void){
    printf("Enter a number: ");
    int num;
    scanf("%d", &num);
    printf("Factorial of %d = %d", num, factorial(num));
}

int factorial(int n){
    if (n==0){
    return 1;
    }
    return n * factorial(n-1);
    return 0;
}
