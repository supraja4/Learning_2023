#include <stdio.h>

void printBits(unsigned int num) {
    int bitCount = sizeof(num) * 8; // Number of bits in the integer (assuming 32-bit)

    for (int i = bitCount - 1; i >= 0; i--) {
        unsigned int mask = 1u << i;
        int bit = (num & mask) ? 1 : 0;
        printf("%d", bit);
    }
    printf("\n");
}

int main() {
    unsigned int num;
    printf("Enter a 32-bit integer: ");
    scanf("%u", &num);

    printf("Bits: ");
    printBits(num);

    return 0;
}