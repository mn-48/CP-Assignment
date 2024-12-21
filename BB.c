#include <stdio.h>

void findPythagoreanTriplets(int start, int end) {
    printf("Pythagorean Triplets in the range [%d, %d]:\n", start, end);

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
    int start, end;

    // printf("Enter the initial point of the range: ");
    printf("Initial: ");
    scanf("%d", &start);
    
    // printf("Enter the final point of the range: ");
    printf("Final: ");
    scanf("%d", &end);

    if (start < 1 || end <= start) {
        printf("Invalid range. Please enter a valid range with start < end and both >= 1.\n");
        return 1;
    }

    findPythagoreanTriplets(start, end);

    return 0;
}
