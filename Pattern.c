#include<stdio.h>
void printNumbers(int n){
    int i;
    for(i=1;i<=n;i++){
        printf("%d",i);
    }
}
void printspaces(int n){
    int i;
    for(i=1;i<=n;i++){
        printf(" ");
    }
}
void printrev(int n){
    int i;
    for(i=n;i>=1;i--){
        printf("%d",i);
        }
        }
void printpattern(int n){
    int i;
    for(i=5;i>=1;i--){
        printNumbers(i);
        printspaces(2*(n-i));
        printrev(i);
        printf("\n");
    }
}
int main(){
    int n;
    printf("Enter the no.of rows:");
    scanf("%d",&n);
    printpattern(n);
    return 0;
}