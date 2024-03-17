#include<stdio.h>
int main(){
    int n;
    printf ("Enter a number:");
    scanf("%d",&n);
    if(n>=0){
        printf("the absolute value of the number is: %d", n);
    }
    else{
        printf("the absolute value of the number is: %d", -n);
    }

    return 0;
}