#include<stdio.h>
#define PKJ 3.141592340289398428048  //called macros
int main(){
    double x =PKJ; //double works till 15 decimal places
    printf("%.15f",x);
    return 0;
}