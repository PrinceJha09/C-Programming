#include<stdio.h>
int main(){
    int a;
    printf("enter a three digit no.:");
    scanf("%d",&a);
    int b= a/100;
    int c= (a-100*b)/10;
    int d= (a-100*b-10*c);
    printf("the sum of its digits is:%d", b+c+d);
    return 0;

}