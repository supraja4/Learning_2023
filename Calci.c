#include<stdio.h>
int main()
{
    float num1,num2;
    char operator;
    float res;

    printf("Enter the Number1:");
    scanf("%f",&num1);

    printf("Enter the Operator:");
    scanf("%s",&operator);

    printf("Enter the Number2:");
    scanf("%f",&num2);

    switch(operator)
    {
        case '+':
        res = num1 + num2;
        printf("Result:%f",res);
        break;

        case '-':
        res = num1 - num2;
        printf("Result:%f",res);
        break;

        case '*':
        res = num1 * num2;
        printf("Result:%f",res);
        break;

        case '/':
        res = num1 / num2;
        printf("Result:%f",res);
        break;

        default:
        printf("Error");
        break;
    }
    

    return 0;
}