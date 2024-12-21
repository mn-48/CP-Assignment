#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void guessNumberGame(int A, int B) {
    if (A >= B) {
        printf("Invalid range. Ensure A < B.\n");
        return;
    }

    srand(time(NULL));
    int target = A + rand() % (B - A + 1);
    int guess, tries = 0, maxTries = 10;


    while (tries < maxTries) {
        printf("Guess: ");
        scanf("%d", &guess);
        tries++;

        if (guess == target) {
            printf("Congratulations! You guessed the number!\n");
            printf("Your Score = %d\n", 10 - tries + 1);
            return;
        } else if (guess < target) {
            printf("Low\n");
        } else {
            printf("High\n");
        }
    }

    printf("Sorry, you ran out of tries. The number was %d\n", target);
}

int main() {
    int A, B;

    printf("Input:\n");
    printf("A = ");
    scanf("%d", &A);
    printf("B = ");
    scanf("%d", &B);

    printf("\nOutput:\n");
    guessNumberGame(A, B);

    return 0;
}
