#include <cs50.h>
#include <stdio.h>

// int main(void){
//     string s = get_string("What's your name? ");
//     printf("Hello, %s!\n", s);
// }

int main(int argc, string argv[])
{
    if (argc > 1)
    {
        for (int i = 0; i < argc; i++){
            printf(" %s ", argv[i]);
        }
        printf("\n");
    }
    else
    {
        printf("Hello, World!\n");
    }
}
