#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
    // Seed the random number generator with current time
    srand(time(0));

    // Generate random number between 1 and 100
    int randomNumber = (rand() % 100) + 1;
    int no_of_guesses = 0;
    int guessed_number;

    // printf("Random number between 1 and 100: %d\n", randomNumber);
    do
    {
        printf("guess the number");
        scanf("%d", &guessed_number);
        if (guessed_number > randomNumber)
        {
            printf("lower number please!\n");
        }
        else if (guessed_number < randomNumber)
        {
            printf("higher number please!\n");
        }
        else
        {
            printf("congrats!!\n");
        }
        no_of_guesses++;
    } while (guessed_number != randomNumber);
    printf("you guessed the number in %d guesses", no_of_guesses);
    return 0;
}
