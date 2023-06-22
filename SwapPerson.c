#include <stdio.h>
#include <string.h>

struct Person {
    char name[50];
    int age;
};

void swapFields(struct Person* p1, struct Person* p2) {
    
    char tempName[50];
    strcpy(tempName, p1->name);
    strcpy(p1->name, p2->name);
    strcpy(p2->name, tempName);

    int tempAge = p1->age;
    p1->age = p2->age;
    p2->age = tempAge;
}

int main() {
    struct Person person1, person2;

    printf("Enter details for person 1:\n");
    printf("Name: ");
    fgets(person1.name, sizeof(person1.name), stdin);
    printf("Age: ");
    scanf("%d", &person1.age);

    getchar();

    printf("\nEnter details for person 2:\n");
    printf("Name: ");
    fgets(person2.name, sizeof(person2.name), stdin);
    printf("Age: ");
    scanf("%d", &person2.age);

    printf("\nBefore swapping:\n");
    printf("Person 1: %sAge: %d\n", person1.name, person1.age);
    printf("Person 2: %sAge: %d\n", person2.name, person2.age);

    swapFields(&person1, &person2);

    printf("\nAfter swapping:\n");
    printf("Person 1: %sAge: %d\n", person1.name, person1.age);
    printf("Person 2: %sAge: %d\n", person2.name, person2.age);

    return 0;
}


