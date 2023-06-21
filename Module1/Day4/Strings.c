#include <stdio.h>

int main() {

    int i,num;
    char str[50];
    
    printf("Enter the string:\n");
    scanf("%s",&str[i]);
 
    int res=0;
    for(i=0;str[i]!='\0';i++)
    {
        num = str[i] - '0';
        
        if(num>=0 && num<=9)
        {
        res = res * 10 + num;
        }
    }
    printf("The integer value of the string is:%d",res);
    return 0;
}