#include<stdio.h>

int main()
{
    int num;
    printf("Enter the marks of the student:",num);
    scanf("%d",&num);
    if(num>=90 && num<=100)
    {
        printf("Grade A");
    }
    else if(num>=75 && num<=89)
    {
        printf("Grade B");
    }
    else if(num>=60 && num<=74)
    {
        printf("Grade C");
    }
    else if(num>=50 && num<=59)
    {
        printf("Grade D");
    }
    else 
    {
        printf("Fail");
    }
    return 0;
}