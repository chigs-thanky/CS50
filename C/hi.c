#include <stdio.h>
#include <cs50.h>


int main(void){
    // string s = "HI!";
    // printf("%s\n", s);
    // s[2] = '@'; Won't work,
    // it should be like this
    char s[] = "HI!";
    s[2] = '@';
    printf("%i %i %c %i %i %c\n", s[0], s[1], s[2], s[3], s[4], 65);

}
