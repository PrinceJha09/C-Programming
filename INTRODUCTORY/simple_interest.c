#include<stdio.h>
int main(){
    float p=10000; // principal amount 
    float r=10; // rate o(f interest per annum
    float t=12; // time (in years)
    float si= p*r*t/100; // simple interest

    printf("%f", si);
    return 0;

}