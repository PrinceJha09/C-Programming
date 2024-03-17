#include<stdio.h>
int main(){
    int i,n;
    scanf("%d",&n);
    for(i=n;i<=10*n;i=i+n){
        printf(" %d",i);
    }
    return 0;
}