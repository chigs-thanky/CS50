#include <stdio.h>

int main(void){
    // string s = "Hi!"; //Not work because in C, there's no string datatype
/*
    char s[]="Hello CS50x!"; //Use array instead
    printf("%s\n", s);
*/
    char *s = "Hi!";
    printf("%s\n", s);
    printf("%p\n", s);
    printf("%p\n", s[0]);
}