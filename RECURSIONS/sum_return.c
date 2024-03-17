#include<stdio.h>
int sum(int n){
    if(n==1 || n==0) return n; //base case
    return n+sum(n-1);
}
int main(){
int n;
printf("Enter any number:");
scanf("%d",&n);
int s=sum(n);
printf("\n%d",s);
    return 0;
}