#include <stdio.h>

struct Box {
    float length;
    float width;
    float height;
};

float calculateVolume(struct Box* boxPtr) {
    float volume = boxPtr->length * boxPtr->width * boxPtr->height;
    return volume;
}

float calculateSurfaceArea(struct Box* boxPtr) {
    float surfaceArea = 2 * (boxPtr->length * boxPtr->width + boxPtr->length * boxPtr->height + boxPtr->width * boxPtr->height);
    return surfaceArea;
}

int main() {
    struct Box box;
    struct Box* boxPtr = &box;

    printf("Enter the dimensions of the box:\n");
    printf("Length: ");
    scanf("%f", &(boxPtr->length));
    printf("Width: ");
    scanf("%f", &(boxPtr->width));
    printf("Height: ");
    scanf("%f", &(boxPtr->height));

    // Accessing members with the help of (*) asterisk or indirection operator and (.) dot operator
    float volume = (*boxPtr).length * (*boxPtr).width * (*boxPtr).height;
    float surfaceArea = 2 * ((*boxPtr).length * (*boxPtr).width + (*boxPtr).length * (*boxPtr).height + (*boxPtr).width * (*boxPtr).height);

    printf("\nUsing (*) asterisk and (.) dot operator:\n");
    printf("Volume: %.2f\n", volume);
    printf("Surface Area: %.2f\n", surfaceArea);

    // Accessing members with the help of (->) Arrow operator using pointer as well as dot representation
    volume = boxPtr->length * boxPtr->width * boxPtr->height;
    surfaceArea = 2 * (boxPtr->length * boxPtr->width + boxPtr->length * boxPtr->height + boxPtr->width * boxPtr->height);

    printf("\nUsing (->) Arrow operator:\n");
    printf("Volume: %.2f\n", volume);
    printf("Surface Area: %.2f\n", surfaceArea);

    return 0;
}
