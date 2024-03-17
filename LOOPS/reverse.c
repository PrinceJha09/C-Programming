#include<stdio.h>
int main(){
    int n;
    printf("Enter a number:");
    scanf("%d",&n);
    printf("reverse is:");
    while(n!=0){
    printf("%d",n%10); //n%10=lastDigit
    n=n/10;
    }
    return 0;
}