#include<stdio.h>
int main(){
    int n;
    printf("enter no. of terms :");
    scanf("%d",&n);
    float a=100;
    for(int i=1;i<=n;i++){
        printf(" %f",a);
        a=a/2;
    }
}