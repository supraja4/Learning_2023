#include<stdio.h>

int main()
{
    int rollno;
    char name[50];
    float a,b,c;

    printf("Enter the rollno: ");
    scanf("%d",&rollno);

    printf("Enter the name of student: ");
    scanf("%s",&name);

    printf("Enter the marks for Physics: ");
    scanf("%f",&a);

    printf("Enter the marks for Maths: ");
    scanf("%f",&b);

    printf("Enter the marks for Chemistry: ");
    scanf("%f",&c);

    float total = a+b+c;
    printf("Total marks:%f ",total);

    float percentage = total/300 * 100;
    printf("Total Percentage:%f",percentage);

    printf("\n Summary:- \n");
    printf("Roll no:%d \n",rollno);
    printf("Name of student:%s \n",name);
    printf("Marks in Physiscs:%f \n",a);
    printf("Marks in Maths:%f \n",b);
    printf("Marks in Chemistry:%f \n",c);
    printf("Total marks:%f \n",total);
    printf("Total percentage:%f \n",percentage);

    return 0;

}