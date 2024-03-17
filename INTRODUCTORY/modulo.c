#include<stdio.h>
int main(){
    int a,b;
    printf("enter dividend");
    scanf("%d",&a);
    printf("enter divisor");
    scanf("%d", &b);
    printf("the remainder when %d is divided  by %d is: %d",a,b,a%b);
    return 0;
}