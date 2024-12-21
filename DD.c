#include <stdio.h>
#include <stdbool.h>

bool check_isPrime(int num) {
    if (num <= 1) return false;
    for (int i = 2; i * i <= num; i++) {
        if (num % i == 0) return false;
    }
    return true;
}


void findAllPrimePairs(int N) {
    if (N <= 2 || N % 2 != 0) {
        printf("Invalid Input! Your input must be an even number greater than 2.\n");
        return;
    }

    for (int i = 2; i <= N / 2; i++) {
        if (check_isPrime(i) && check_isPrime(N - i)) {
            printf("%d %d\n", i, N - i);
        }
    }
}

int main() {
    int N;

    printf("Input:\n");
    printf("N = ");
    scanf("%d", &N);
    printf("Output:\n");


    findAllPrimePairs(N);

    return 0;
}
