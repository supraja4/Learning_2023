#include <stdio.h>

void findSmallestAndLargestDigits(int n, int numbers[]) {
    int smallestDigit = 9;
    int largestDigit = 0;
    int i;

    for (i = 0; i < n; i++) {
        int currentNumber = numbers[i];

        while (currentNumber != 0) {
            int digit = currentNumber % 10;

            if (digit < smallestDigit) {
                smallestDigit = digit;
            }

            if (digit > largestDigit) {
                largestDigit = digit;
            }

            currentNumber /= 10;
        }
    }

    if (smallestDigit == 9 || largestDigit == 0) {
        printf("Not Valid\n");
    } else {
        printf("Smallest Digit: %d\n", smallestDigit);
        printf("Largest Digit: %d\n", largestDigit);
    }
}

int main() {
    int n;
    printf("Enter the value of n: ");
    scanf("%d", &n);

    int numbers[n];
    int i;

    for (i = 0; i < n; i++) {
        printf("Enter number %d: ", i + 1);
        scanf("%d", &numbers[i]);
    }

    findSmallestAndLargestDigits(n, numbers);

    return 0;
}