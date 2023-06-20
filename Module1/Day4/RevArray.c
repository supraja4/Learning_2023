#include <stdio.h>
void reverseArray(int arr[], int len) {
    int start = 0;
    int end = len - 1;
    int temp;
    while (start < end) {
        temp = arr[start];
        arr[start] = arr[end];
        arr[end] = temp;
        start++;
        end--;
    }
}
int main() {
    int len,i,sum=0,avg;
    printf("Enter length of array:");
    scanf("%d",&len);
    int arr[len];
    for(i=0;i<len;i++){
        scanf("%d",&arr[i]);
    }
    printf("Original Array: ");
    for (i = 0; i < len; i++) {
        printf("%d ", arr[i]);
    }
    reverseArray(arr, len);
    printf("\nReversed Array: ");
    for (i = 0; i < len; i++) {
        printf("%d ", arr[i]);
    }
    return 0;
}