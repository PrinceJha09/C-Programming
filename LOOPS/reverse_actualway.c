#include<stdio.h>
int main(){
    int n;
    printf("Enter a number:");
    scanf("%d",&n);
    int number=n;
    int reverse=0;
    while(n!=0){
    reverse=10*reverse + n%10; //n%10=lastDigit
    n=n/10;
    }
    printf("THE REVERSE OF THE GIVEN NUMBER IS:%d",reverse);
    printf("\nthe sum of the number and its reverse is :%d",number+reverse );
    return 0;
}