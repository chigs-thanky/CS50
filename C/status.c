#include <stdio.h>
#include <cs50.h>

int main(int argc, string argv[]){
    if (argc != 2){
        printf("Missing Command-Line Argument!\n");
        // return 404; //Because process exit codes on most systems are stored in a single byte (0–255).
        return 50;
    }
    else{
        printf("Hello, %s!\n", argv[1]);
        return 0;
    }
}
