#include <stdio.h>
#include <cs50.h>

int main(void){
    int n = get_int("Enter sample amount: ");
    float avg, sum = 0;
    int score;

    for(int i = 0; i < n; i++){
      score = get_int("Enter score: ");
        sum += score;
    }

    avg = sum / n;
    printf("Average: %.2f\n", avg);
}
