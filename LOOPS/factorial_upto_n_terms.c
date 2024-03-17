#include<stdio.h>
int main(){
    int n;
    printf("enter number of terms");
    scanf("%d",&n);
    int factorial=1;
    for(int i=1;i<=n;i++){
       factorial=factorial*i; 
       printf("\n%d factorial is : %d",i,factorial);
    }
    return 0;
}