#include <stdio.h>
int main(){

char name[50];
int Rollno;
int Phy,Che,M;

printf("Enter the Rollno of Student:");
scanf("%d",&Rollno);

printf("Enter the Name of Student:");
scanf("%s",&name);

printf("Enter the Marks in Physics:");
scanf("%d",&Phy);

printf("Enter the Marks in Chemistry:");
scanf("%d",&Che);

printf("Enter the Marks in Maths:");
scanf("%d",&M);

int Total = Phy + Che + M;
printf("Total Marks:%d\n",Total);

float Percentage = (float)Total / 300 * 100;
printf("Total Percentage:%f\n",Percentage);

printf("\nSummary:-\n");
printf("\nName of the Student:%s\n",name);
printf("\nRollno of Student:%d\n",Rollno);
printf("\nMarks obtained in Physics:%d\n",Phy);
printf("\nMarks obtained in Chemistry:%d\n",Che);
printf("\nMarks obtained in Maths:%d\n",M);
printf("\nTotal Marks:%d\n",Total);
printf("\nTotal Percentage:%f\n",Percentage);

return 0;

}