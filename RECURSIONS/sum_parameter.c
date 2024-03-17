#include<stdio.h>
void sum(int x ,int n){
    if(x==0){
        printf("%d",n);
        return;
    }
    sum(x-1,x+n);
}
int main(){
int n;
printf("Enter any number:");
scanf("%d",&n);
sum(n,0);
    return 0;
}