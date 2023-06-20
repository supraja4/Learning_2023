#include <stdio.h>

void swap(void *a,void *b)
{
    void *temp=a;
    a=b;
    b=temp;
}
int main()
{
    int a,b;
    printf("Enter two numbers:");
    scanf("%d %d",&a,&b);
    printf("Before Swap:a=%d,b=%d \n",a,b);
    
    void swap(void *a,void *b);
    printf("After Swap:a=%d,b=%d \n",b,a);
    
    return 0;
}