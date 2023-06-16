#include <stdio.h>

int main()
{
    int arr[]={10,20,30,40,50};
    int i;
    int sum=0;
    for(i=0;i<5;i+=2)
    {
        sum += arr[i];
    }
    printf("Sum of alternate elements is:%d",sum);
    
    return 0;
}