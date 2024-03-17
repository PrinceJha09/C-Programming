#include<stdio.h>
int stair(int n){
    // if(n==1) return 1;
    // if(n==2) return 2; 

    if(n<=2) return n;
    return (stair(n-1)+stair(n-2)); // only single or double steps allowed
}
int main(){
int n;
printf("Enter number of steps:");
scanf("%d",&n);
printf("\n%d",stair(n));
    return 0;
}