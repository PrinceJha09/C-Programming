#include<stdio.h>
int main(){
    int n;
    printf ("Enter a number");
    scanf("%d",&n);

    n%2==0 ? printf("it is an even number") : printf("it is an odd number");
    // if(n%2==0){
    //     printf("It is an even number");
    // }
    // if(n%2!=0){
    //     printf("It is an odd number");
    // }

    return 0;
}