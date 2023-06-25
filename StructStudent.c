#include <stdio.h>

struct Student {
    char name[50];
    int age;
    float gpa;
};

int main() {
    int n;
    struct Student* students;

    printf("Enter the number of students: ");
    scanf("%d", &n);

    if (n==0)
    {
        printf("No students");
        return 1;
    }

    for (int i = 0; i < n; i++) {
        printf("\nEnter details for Student %d:\n", i+1);

        printf("Enter name: \n");
        scanf("%s", &students[i].name);

        printf("Enter age: \n");
        scanf("%d", &students[i].age);

        printf("Enter GPA: ");
        scanf("%f", &students[i].gpa);
    }
  
    printf("\n\n--- Student Details ---\n");
    for (int i = 0; i < n; i++) {
        printf("\nDetails of Student %d:\n", i+1);
        printf("Name: %s\n", students[i].name);
        printf("Age: %d\n", students[i].age);
        printf("GPA: %.2f\n", students[i].gpa);
    }

    return 0;
}
