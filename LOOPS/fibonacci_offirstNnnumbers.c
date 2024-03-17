#include<stdio.h>
int main(){
    int n;
    printf("enter term ");
    scanf("%d",&n);
    int a=1;
    int b=1;
    int sum=1;
    printf("\nThe 1st fibonacci is 1");
    for(int i=1;i<=n-1;i++){
        sum=a+b;
        a=b;
        b=sum;
        printf("\nThe %dth fibonacci is %d",i+1,a);
    }
    return 0;
}