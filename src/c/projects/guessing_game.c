#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    srand(time(NULL));
    
    int secret = rand() % 100 + 1;
    int guess, attempts = 0;
    
    printf("=== Number Guessing Game ===\n");
    printf("I'm thinking of a number between 1 and 100.\n");
    printf("Can you guess it?\n\n");
    
    do {
        printf("Enter your guess: ");
        scanf("%d", &guess);
        attempts++;
        
        if (guess < secret) {
            printf("Too low! Try again.\n");
        } else if (guess > secret) {
            printf("Too high! Try again.\n");
        } else {
            printf("Congratulations! You guessed it in %d attempts!\n", attempts);
        }
    } while (guess != secret);
    
    return 0;
}
