#include<stdio.h>
int main()
{
    int arr[50];
    int i,size;
    int sum=0;

    printf("Enter the size of array:");
    scanf("%d",&size);

    printf("Enter the elements of array:\n");
    for(i=0;i<size;i++)
    {
        scanf("%d",&arr[i]);
    }

    for(i=0;i<size;i++)
    {
        sum = sum + arr[i];
    }
    printf("Sum of the elements of the array:%d",sum);

    return 0;
}