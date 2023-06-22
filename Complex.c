#include <stdio.h>
#include <stdlib.h>
typedef struct {
    float real;
    float imaginary;
} Complex;
Complex readComplex() {
    Complex number;
    printf("Enter the real part: ");
    scanf("%f", &number.real);
    printf("Enter the imaginary part: ");
    scanf("%f", &number.imaginary);
    return number;
}
void writeComplex(Complex number) {
    printf("Complex number: %.2f + %.2fi\n", number.real, number.imaginary);
}
void MComplex(Complex number) {
    printf("Complex number: %.2f * %.2fi\n", number.real, number.imaginary);
}
Complex addComplex(Complex n1, Complex n2) {
    Complex result;   
    result.real = n1.real + n2.real;
    result.imaginary = n1.imaginary + n2.imaginary;
    return result;
}
Complex MulComplex(Complex n1, Complex n2) {
    Complex result;   
    result.real = n1.real * n2.real;
    result.imaginary = n1.imaginary * n2.imaginary;
    return result;
}
int main() {
    Complex n1, n2, sum , Mul;   
    printf("Enter the first complex number:\n");
    n1 = readComplex();
    printf("Enter the second complex number:\n");
    n2 = readComplex();
    printf("\n");
    printf("First complex number:\n");
    writeComplex(n1);
    printf("Second complex number:\n");
    writeComplex(n2);
    sum = addComplex(n1, n2);
    printf("Sum of the two complex numbers:\n");
    writeComplex(sum);
    Mul = MulComplex(n1, n2);
    printf("Multiplication of the two complex numbers:\n");
    MComplex(Mul);
    return 0;
}