#include<stdio.h>
int main(){
    int a;
    printf("enter base:");
    scanf("%d",&a);
    int b;
    printf("enter power:");
    scanf("%d",&b);
    int c=1;
    for(int i=1;i<=b;i++){
        c=c*a;
         printf("\n%d raised to power of %d is:%d",a,i,c);
    }
    return 0;
}