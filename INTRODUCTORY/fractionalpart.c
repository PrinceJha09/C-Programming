#include<stdio.h>
int main(){
    float a;
    printf("enter any value");
    scanf("%f",&a);
    int b=a;
    printf("fractional part of the number taken is : %f",a-b);
    return 0;
}