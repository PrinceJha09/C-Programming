#include<stdio.h>
int main(){
    int n;
    printf("enter any number:");
    scanf("%d",&n);
    // for(int i=2;i<=n-1;i++){
    //     if (n%i==0)   printf("\nthe number is composite");
    // }
    // in above case, there was problem of printing multiple times
    int a=0; // for checking prime
    for(int i=2;i<=n-1;i++){
        if (n%i==0){
        a=1;
        break; // //used for terminating loop
        }
    }
    if (n==1) printf(" 1 is neither prime nor composite");
    else if (a==0) printf("the number entered is prime");
    else printf("the number entered is composite");
    return 0;
}