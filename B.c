#include <stdio.h>

void findPythagoreanTriplets_Solution(int start, int end) {

    for (int a = start; a <= end; a++) {
        for (int b = a + 1; b <= end; b++) {
            for (int c = b + 1; c <= end; c++) {
                if (a * a + b * b == c * c) {
                    printf("%d, %d, %d\n", a, b, c);
                }
            }
        }
    }
}

int main() {

    printf("Input:\n");

    int start, end;
    printf("Initial: ");
    scanf("%d", &start);
    printf("Final: ");
    scanf("%d", &end);


    printf("\nOutput:\n");

    if (start < 1 || end <= start) {
        printf("Invalid range. Please enter a valid range with start < end and both >= 1.\n");
        return 1;
    }

    findPythagoreanTriplets_Solution(start, end);

    return 0;
}
