#include <stdio.h>
#include <ctype.h>
int main() {
  char str[50];
  int i;
  
  printf("Enter the string:");
  scanf("%s",&str);
 {
  for(i=0;str[i]!='\0';i++)
  {
      if(islower(str[i])){
       str[i] = toupper(str[i]);
      }
      else if (isupper(str[i])){
       str[i] = tolower(str[i]);
      }
  }
}
  printf("Toggled case:%s",str);
  return 0;
}