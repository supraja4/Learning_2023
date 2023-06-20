#include <stdio.h>

int main() {
    double x = 0.7;

    unsigned long long *ptr = (unsigned long long *)&x;
    unsigned long long exponent = (*ptr & 0x7FF0000000000000) >> 52;

    char hex[4];
    printf(hex, sizeof(hex), "%llX", exponent);

    char binary[12];
    for (int i = 10; i >= 0; i--) {
        binary[10 - i] = ((exponent >> i) & 1) ? '1' : '0';
    }
    binary[11] = '\0';

    printf("Exponent in hexadecimal: 0x%s\n", hex);
    printf("Exponent in binary: 0b%s\n", binary);

    return 0;
}
