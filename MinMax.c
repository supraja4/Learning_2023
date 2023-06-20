 #include <stdio.h>

int main() {
    // Write C code here
    //printf("Hello world");
    int arr[100];
    int i,size;
  
    printf("Enter the size of array:");
    scanf("%d",&size);
    
    printf("Enter the elements of the array:\n");
    for(i=0;i<size;i++)
    {
    scanf("%d",&arr[i]);
    }
    int min=arr[0];
    for(i=0;i<size;i++)
    {
       if(arr[i]<min)
       {
        min = arr[i];
       }
    }
    printf("Minimum element in the array:%d\n",min);
    
    int max=arr[0];
    for(i=0;i<size;i++)
    {
       if(arr[i]>max)
       {
        max = arr[i];
       }
    }
    printf("Maximim element in the array:%d\n",max);
    
    
    return 0;
}