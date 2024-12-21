#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <string.h>

#define SPECIAL_CHARACTERS "!@#$%^&*()_-+=<>?/"

void generateRandomPassword_Solution(int length) {
    if (length < 6) {
        printf("Password length must be at least 6.\n");
        return;
    }

    char password[length + 1];
    char uppercase = 'A' + rand() % 26;
    char lowercase = 'a' + rand() % 26;
    char number = '0' + rand() % 10;
    char special = SPECIAL_CHARACTERS[rand() % strlen(SPECIAL_CHARACTERS)];

    password[0] = uppercase;
    password[1] = special;
    password[2] = number;
    password[3] = lowercase;

    for (int i = 4; i < length; i++) {
        int category = rand() % 4;
        switch (category) {
            case 0:
                password[i] = 'A' + rand() % 26;
                break;
            case 1:
                password[i] = 'a' + rand() % 26;
                break;
            case 2:
                password[i] = '0' + rand() % 10;
                break;
            case 3:
                password[i] = SPECIAL_CHARACTERS[rand() % strlen(SPECIAL_CHARACTERS)];
                break;
        }
    }


    for (int i = length - 1; i > 0; i--) {
        int j = rand() % (i + 1);
        char temp = password[i];
        password[i] = password[j];
        password[j] = temp;
    }

    password[length] = '\0'; 

    printf("Password = %s\n", password);
}

int main() {
    printf("Input:\n");

    int N;
    printf("N = ");
    scanf("%d", &N);

    printf("\nOutput:\n");
    generateRandomPassword_Solution(N);

    return 0;
}
