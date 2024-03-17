#include<stdio.h>
int main(){
    int n;
    printf("Enter a number:");
    scanf("%d",&n);
    int sum=0;
    while(n!=0){
    sum=sum+n%10; //n%10=lastDigit
    n=n/10;
    }
    printf("the sum of digits is : %d",sum);
    return 0;
}