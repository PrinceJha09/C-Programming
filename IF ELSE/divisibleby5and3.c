#include<stdio.h>
int main(){
    int n;
    printf("enter any number:");
    scanf("%d",&n);
    if(n%5==0 && n%3==0){
        printf("the number is divisible by 5 and 3");
    }
    else if (n%5==0 && n%3!=0){
        printf("the number is divisible by 5 only");
    }
    else if (n%5!=0 && n%3==0){
        printf("the number is divisible by 3 only");
    }
    else{
        printf("the number is neither divisible by 5 nor by 3 ");
    }
    return 0;
}