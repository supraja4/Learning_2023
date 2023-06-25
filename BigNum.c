#include <stdio.h>
void BigNum(int num1,int num2){
    if(num1>num2)
    {
        printf("%d is greater than %d\n",num1,num2);
    }
    else if(num2>num1)
    {
        printf("%d is greater than %d\n",num2,num1);
    }
    else
    {
        printf("Both numbers are equal\n");
    }
}
void Op(int num1,int num2){
    num1 > num2 ? printf("%d is greater than or equal to %d",num1,num2):printf("%d is greater than or equal to %d",num2,num1);
}

int main() {
    int num1,num2;
    printf("Enter first number:");
    scanf("%d",&num1);
    printf("Enter second number:");
    scanf("%d",&num2);
    BigNum(num1,num2);
    Op(num1,num2);
    return 0;
}