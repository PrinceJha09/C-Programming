#include<stdio.h>
#define PI 3.14159265359    //macros

// float area(float r){
//     return(PI*r*r);
// }

#define area(r) (PI*r*r)     //macro functions
int main(){
    float r=2.5;
    printf("%f",area(r));
    return 0;
}