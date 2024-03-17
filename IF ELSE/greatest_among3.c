#include<stdio.h>
int main(){
    int a;
    printf("enter 1st number:");
    scanf("%d",&a);
    int b;
    printf("enter 2nd number:");
    scanf("%d",&b);
    int c;
    printf("enter 3rd number:");
    scanf("%d",&c);
    if( a>b && a>c){
        printf("greatest is %d",a);
    }
    else if( a<b && b>c){
        printf("greatest is %d",b);
    }
    else if(c>a && c>b){
        printf("greatest is %d",c);
    }

    return 0;
}