#include<stdio.h>
int main(){
    int a;
    printf("enter ram's age:");
    scanf("%d",&a);
    int b;
    printf("enter shyam's age:");
    scanf("%d",&b);
    int c;
    printf("enter ajay's age:");
    scanf("%d",&c);
    if(a<b){
        if (a<c) 
        printf("ram is youngest");
        else
        printf("ajay is youngest");
    }
    else{
        if(b<c)
        printf("shyam is youngest");
        else
        printf("ajay is youngest");
    }

    return 0;
}