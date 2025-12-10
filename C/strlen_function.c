#include <stdio.h>
#include <cs50.h>
#include <string.h>

int main(void){
    string name = get_string("Name: ");
    int length = strlen(name);
    printf("Length of %s is: %i\n", name, length);
    
}
