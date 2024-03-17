#include<stdio.h>
int main(){
    float r;
    printf("Enter Radius:");
    scanf("%f",&r);
    float pi=3.1415;
    float A=pi*r*r;
    printf("The area of the given circle is %f", A);

    return 0;
}