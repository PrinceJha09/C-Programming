#include<stdio.h>
int main(){
    int a;
    printf("Enter a:");
    scanf("%d",&a);
    int b;
    printf("Enter b:");
    scanf("%d",&b);
    int temp=a;
    a=b;
    b=temp;
    printf("The value of a is %d",a);
    printf("\n The value of b is %d", b);
    return 0;
}