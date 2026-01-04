#include <stdio.h>
#include <ctype.h> 

int main(void){
    int c = 65; // ASCII value for 'a'; 
    printf("The value of c is \"%c\"\n", c);
    c+=32;
    printf("The value of c after is \"%c\"\n", c);
    return 0;
}