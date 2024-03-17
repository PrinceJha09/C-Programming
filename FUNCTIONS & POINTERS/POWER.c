#include<stdio.h>
#include<math.h>
int main(){
    int a;
    printf("enter base");
    scanf("%d",&a);
    int b; 
    printf("enter power");
    scanf ("%d",&b);
    int value=pow(a,b);
    printf("%d raised to power %d is %d",a,b,value);
    return 0;
}