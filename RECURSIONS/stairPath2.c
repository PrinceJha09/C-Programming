#include<stdio.h>

int stair(int n){
    if(n<=2) return n;
    if(n==3) return 4; 
    return (stair(n-1)+stair(n-2)+stair(n-3)); // only single,double, or triple steps allowed
}
int main(){
int n;
printf("Enter number of steps:");
scanf("%d",&n);
printf("\n%d",stair(n));
    return 0;
}