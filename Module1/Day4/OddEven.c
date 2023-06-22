#include <stdio.h>
int main()
{
    int arr[100];
    int i,size;
    
    printf("Enter the size of array:");
    scanf("%d",&size);
    
    printf("Enter the elements of array:\n");
    for(i=0;i<size;i++)
    {
        scanf("%d",&arr[i]);
    }
    int sum =0;
    for(i=0;i<size;i++)
    {
        if(arr[i]%2==0)
        {
            sum = sum + arr[i];
        }
    }
    printf("Sum of Even elements:%d\n",sum);
    int sum1=0;
    for(i=0;i<size;i++)
    {
        if(arr[i]%2!=0)
        {
            sum1 =sum1 + arr[i];
        }
    }
    printf("Sum of odd elements:%d\n",sum1);
    return 0;
}